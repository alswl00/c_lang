#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char id[5][10];
	char password[5][10];
	int user;
	int res1, res2;
	FILE *fp;
	char answer[4];
	char *login = "Login fail";
	
		fp = fopen("password.dat", "wb");
		
		printf("사용자 수를 입력하세요>>");
		scanf("%d", &user);

		for (int i = 0; i < user; i++) {
				printf("ID를 입력하세요 : ");
				scanf("%s", id[i]);
				printf("패스워드를 입력하세요 : ");
				scanf("%s", password[i]);
		}
		fwrite(id, sizeof(char), user,fp);
		fwrite(password, sizeof(char), user,fp);
		fclose(fp);

		
		fp = fopen("password.dat", "rb");
		/*fread(id, sizeof(char), user, fp);
		fread(password, sizeof(char), user, fp);
		printf("패스워드 파일을 읽었습니다. %d명의 사용자 정보가 있습니다.\n", user);
		do {
			for (int i = 0; i < user; i++) {
				char id_[10];
				char password_[10];
				printf("ID를 입력하세요 : ");
				res1 = scanf("%s", id_[i]);
				printf("패스워드를 입력하세요 : ");
				res2 = scanf("%s", password_[i]);
				for (int j = 0; j < user; j++) {
					if (id[j] == id_[i]) printf("Login OK");
					else ("Login fail");
				}
			}
			printf("ID를 입력하시겠습니까?(yes/no)>>");
			scanf("%s", answer);
		} while (answer == "yes");*/

		/*for (int i = 0; i < user; i++) 
			fread(id[i], sizeof(char), user*2, fp);*/
		fread(id, sizeof(char), user, fp);
		fread(password, sizeof(char), user, fp);
		printf("패스워드 파일을 읽었습니다. %d명의 사용자 정보가 있습니다.\n", user);
		for (int i = 0; i < user *2; i++) {
			char id_[10];
			char password_[10];
			printf("ID를 입력하세요 : ");
			res1 = scanf("%s", id_);
			printf("패스워드를 입력하세요 : ");
			res2 = scanf("%s", password_);
			for (int j = 0; j < user; j++) {
				if (!(strcmp(id[i], id_) && strcmp(password[i], password_))) {
					login = "Login OK";
					printf("%s\n",login);
					break;
				}
			}
			if(strcmp(login,"Login OK")) 
				printf("%s\n",login);
			printf("ID를 입력하시겠습니까?(yes/no)>>");
			scanf("%s", answer);
			if (strcmp(answer,"yes")) return;
		}
		

		fclose(fp);
	return 0;
}