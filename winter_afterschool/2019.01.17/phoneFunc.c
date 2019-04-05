#include "common.h"
#include "phoneData.h"
#include "phoneFunc.h"
#include "screenOut.h"
void InputPhoneData(phoneData *p) {
	printf("�̸� �Է�: ");
	scanf("%s", p[people].name);
	printf("��ȭ��ȣ �Է�: ");
	scanf("%s", p[people].phoneNum);
	for (int i = 0; i < people; i++) {
		if (strcmp(p[i].name, p[people].name) == 0)
			if (strcmp(p[i].phoneNum, p[people].phoneNum) == 0) {
				printf("�̹� �Էµ� ������ �Դϴ�.\n");
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
	printf("�̸�>>");
	scanf("%s", name);
	for (int i = 0; i < people; i++) {
		if (strcmp(p[i].name, name) == 0) {
			ShowPhoneInfo(p[i]); 
			c++;
		}
	}
	if (c == 0)
		printf("�Էµ� �����Ͱ� �����ϴ�.\n");
	system("PAUSE");
}
void DeletePhoneData(phoneData *p) {
	char name[30]; char tel[30]; char c = 0;
	printf("������ �������� �̸��� �Է��ϼ���>>");
	scanf("%s", name);
	for (int i = 0; i < people; i++) {
		if (strcmp(p[i].name,name) == 0) {
			for (int j = i+1; j < people; j++) {
				if (strcmp(p[i].name, p[j].name) == 0) {
					c = 2;
					printf("���� �̸��� �����Ͱ� �ֽ��ϴ�.\n\n");
					ShowPhoneInfo(p[i]);
					ShowPhoneInfo(p[j]);
					printf("������ �������� ��ȭ��ȣ�� �Է��ϼ���>>");
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
		printf("�����Ǿ����ϴ�.\n");
		people--;
	}
	else printf("�����Ͱ� �����ϴ�.\n");
	system("PAUSE");
}
void ChangePhoneData(phoneData *p) {
	char name[30]; char c = 0;
	printf("������ �������� �̸��� �Է��ϼ���>>");
	scanf("%s", name);
	for (int i = 0; i < people; i++) {
		if (strcmp(p[i].name, name) == 0) {
			printf("��ȭ��ȣ �Է�>>");
			scanf("%s", p[i].phoneNum);
			c++;
		}
	}
	if (c == 0) printf("�ش� �̸��� �����Ͱ� �����ϴ�.\n");
	else printf("��ȭ��ȣ�� ����Ǿ����ϴ�.\n");
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