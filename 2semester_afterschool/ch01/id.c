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
		
		printf("����� ���� �Է��ϼ���>>");
		scanf("%d", &user);

		for (int i = 0; i < user; i++) {
				printf("ID�� �Է��ϼ��� : ");
				scanf("%s", id[i]);
				printf("�н����带 �Է��ϼ��� : ");
				scanf("%s", password[i]);
		}
		fwrite(id, sizeof(char), user,fp);
		fwrite(password, sizeof(char), user,fp);
		fclose(fp);

		
		fp = fopen("password.dat", "rb");
		/*fread(id, sizeof(char), user, fp);
		fread(password, sizeof(char), user, fp);
		printf("�н����� ������ �о����ϴ�. %d���� ����� ������ �ֽ��ϴ�.\n", user);
		do {
			for (int i = 0; i < user; i++) {
				char id_[10];
				char password_[10];
				printf("ID�� �Է��ϼ��� : ");
				res1 = scanf("%s", id_[i]);
				printf("�н����带 �Է��ϼ��� : ");
				res2 = scanf("%s", password_[i]);
				for (int j = 0; j < user; j++) {
					if (id[j] == id_[i]) printf("Login OK");
					else ("Login fail");
				}
			}
			printf("ID�� �Է��Ͻðڽ��ϱ�?(yes/no)>>");
			scanf("%s", answer);
		} while (answer == "yes");*/

		/*for (int i = 0; i < user; i++) 
			fread(id[i], sizeof(char), user*2, fp);*/
		fread(id, sizeof(char), user, fp);
		fread(password, sizeof(char), user, fp);
		printf("�н����� ������ �о����ϴ�. %d���� ����� ������ �ֽ��ϴ�.\n", user);
		for (int i = 0; i < user *2; i++) {
			char id_[10];
			char password_[10];
			printf("ID�� �Է��ϼ��� : ");
			res1 = scanf("%s", id_);
			printf("�н����带 �Է��ϼ��� : ");
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
			printf("ID�� �Է��Ͻðڽ��ϱ�?(yes/no)>>");
			scanf("%s", answer);
			if (strcmp(answer,"yes")) return;
		}
		

		fclose(fp);
	return 0;
}