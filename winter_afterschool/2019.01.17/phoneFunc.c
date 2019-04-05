#include "common.h"
#include "phoneData.h"
#include "phoneFunc.h"
#include "screenOut.h"
void InputPhoneData(phoneData *p) {
	printf("이름 입력: ");
	scanf("%s", p[people].name);
	printf("전화번호 입력: ");
	scanf("%s", p[people].phoneNum);
	for (int i = 0; i < people; i++) {
		if (strcmp(p[i].name, p[people].name) == 0)
			if (strcmp(p[i].phoneNum, p[people].phoneNum) == 0) {
				printf("이미 입력된 데이터 입니다.\n");
				system("PAUSE"); people--; break;
			}
	}
	people++;
}
void ShowAllData(phoneData *p) {
	for (int i = 0; i < people; i++) {
		ShowPhoneInfo(p[i]);
	}
	system("PAUSE");
}
void SearchPhoneData(phoneData *p) {
	char name[30]; char c = 0;
	printf("이름>>");
	scanf("%s", name);
	for (int i = 0; i < people; i++) {
		if (strcmp(p[i].name, name) == 0) {
			ShowPhoneInfo(p[i]); 
			c++;
		}
	}
	if (c == 0)
		printf("입력된 데이터가 없습니다.\n");
	system("PAUSE");
}
void DeletePhoneData(phoneData *p) {
	char name[30]; char tel[30]; char c = 0;
	printf("삭제할 데이터의 이름을 입력하세요>>");
	scanf("%s", name);
	for (int i = 0; i < people; i++) {
		if (strcmp(p[i].name,name) == 0) {
			for (int j = i+1; j < people; j++) {
				if (strcmp(p[i].name, p[j].name) == 0) {
					c = 2;
					printf("같은 이름의 데이터가 있습니다.\n\n");
					ShowPhoneInfo(p[i]);
					ShowPhoneInfo(p[j]);
					printf("삭제할 데이터의 전화번호를 입력하세요>>");
					scanf("%s", tel);
					if (strcmp(p[j].phoneNum, tel) == 0) {
						for (int k = j; k < people; k++)
						p[k] = p[k + 1];
					}
					else if (strcmp(p[i].phoneNum, tel) == 0) {
						for (int k = i; k < people; k++)
							p[k] = p[k + 1];
					}
				}
			}
			if (c != 2) {
				for (int j = i; j < people; j++)
					p[i] = p[i + 1];
				c = 1;
			}
		}		
	}
	if (c != 0) {
		printf("삭제되었습니다.\n");
		people--;
	}
	else printf("데이터가 없습니다.\n");
	system("PAUSE");
}
void ChangePhoneData(phoneData *p) {
	char name[30]; char c = 0;
	printf("변경할 데이터의 이름을 입력하세요>>");
	scanf("%s", name);
	for (int i = 0; i < people; i++) {
		if (strcmp(p[i].name, name) == 0) {
			printf("전화번호 입력>>");
			scanf("%s", p[i].phoneNum);
			c++;
		}
	}
	if (c == 0) printf("해당 이름의 데이터가 없습니다.\n");
	else printf("전화번호가 변경되었습니다.\n");
	system("PAUSE");
}
void StoreDataToFile(phoneData *p) {
	int i;
	FILE *fp = fopen("phoneData.txt","w");
	for (i = 0; i < people; i++) {
		fprintf(fp, "%s\n%s\n", p[i].name, p[i].phoneNum);
	}
	fclose(fp);
}
void LoadDataFromFile(phoneData *p) {
	int i = 0; char *res; int sLen;
	FILE *fp = fopen("phoneData.txt", "r");
	if (fp == NULL) return;
	while (1) {
	fgets(p[i].name, NAME_LEN, fp);
	sLen = strlen(p[i].name);
	p[i].name[sLen - 1] = 0;
	res=fgets(p[i].phoneNum, PHONE_LEN, fp); 
	sLen = strlen(p[i].phoneNum);
	p[i].phoneNum[sLen - 1] = 0;
	if (res == NULL) break;
	people++;
	i++;
	}
	fclose(fp);
}