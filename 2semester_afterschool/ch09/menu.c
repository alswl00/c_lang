#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "Menu.h"

void Open_Ac(account *ac,int i) {

	//account *p = NULL;
	//p = ac;
	printf("�Է� �� EnterŰ�� ��������.\n");
	
	printf("�̸�: ");
	scanf("%s", ac[i].name);
	printf("ID: ");
	scanf("%s", ac[i].id);
	printf("��ȣ: ");
	scanf("%d", &ac[i].passwd);
	getchar();
	printf("�ּ�: ");
	scanf("%[^\n]s", ac[i].address);
	printf("��ȭ��ȣ: ");
	scanf("%s", ac[i].phone);
	printf("�Աݾ�: ");
	scanf("%d", &ac[i].balance);
	getchar();
	//person++;
	//p++;
	//return person;
}

void Find_Ac(account *ac,int num) {
	char id_[10];
	int passwd_;
	printf("�Է� �� EnterŰ�� ��������.\n");
	printf("ID: ");
	scanf("%s", id_);
	printf("��ȣ: ");
	scanf("%d", &passwd_);

	/*account *p=NULL;
	p = &ac[0];*/

	for (int i = 0; i < num; i++) {
		//printf("%d %d\n", person, i);
		//printf("%s %d\n", ac[i].id, ac[i].passwd);

		if (strcmp(id_, ac[i].id) == 0) {
			if (passwd_ == ac[i].passwd) {
				printf("�̸�: %s\t �ܰ�: %d\n", ac[i].name, ac[i].balance);
				printf("ID: %s\t ��ȣ: %d\n", ac[i].id, ac[i].passwd);
				printf("��ȭ��ȣ: %s\n", ac[i].phone);
				printf("�ּ�: %s\n", ac[i].address);
				printf("\n�޴��� �����Ͻ÷��� �ƹ� Ű�� �����ʽÿ�.\n");
			}
		}
		else {
			continue;
			if(i==num) 
				printf("��ȸ ����� �����ϴ�\n");
		}
	}
}

void Deposit(account *ac,int i) {
	char id_[10];
	int passwd_, balance_;
	printf("ID: ");
	scanf("%s", id_);
	printf("��ȣ: ");
	scanf("%d", &passwd_);
	printf("�Աݾ�: ");
	scanf("%d", &balance_);
	
	for (int j = 0; j < i; j++) {
		if (!(strcmp(id_, ac[j].id)) && passwd_ == ac[j].passwd) {
			ac[j].balance += balance_;
			printf("\n�Աݼ���: �ݾ� %d���� �ԱݵǾ����ϴ�\n", balance_);
		}
	}

}
void Withdraw(account *ac,int i) {
	char id_[10];
	int passwd_, balance_;
	printf("ID: ");
	scanf("%s", id_);
	printf("��ȣ: ");
	scanf("%d", &passwd_);
	printf("��ݾ�: ");
	scanf("%d", &balance_);

	for (int j = 0; j < i; j++) {
		if (!(strcmp(id_, ac[j].id)) && passwd_ == ac[j].passwd) {
			ac[j].balance -= balance_;
			printf("\n��ݼ���: �ݾ� %d���� ��ݵǾ����ϴ�\n", balance_);
		}
	}
}