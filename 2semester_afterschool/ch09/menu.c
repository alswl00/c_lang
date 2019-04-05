#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "Menu.h"

void Open_Ac(account *ac,int i) {

	//account *p = NULL;
	//p = ac;
	printf("입력 후 Enter키를 누르세요.\n");
	
	printf("이름: ");
	scanf("%s", ac[i].name);
	printf("ID: ");
	scanf("%s", ac[i].id);
	printf("암호: ");
	scanf("%d", &ac[i].passwd);
	getchar();
	printf("주소: ");
	scanf("%[^\n]s", ac[i].address);
	printf("전화번호: ");
	scanf("%s", ac[i].phone);
	printf("입금액: ");
	scanf("%d", &ac[i].balance);
	getchar();
	//person++;
	//p++;
	//return person;
}

void Find_Ac(account *ac,int num) {
	char id_[10];
	int passwd_;
	printf("입력 후 Enter키를 누르세요.\n");
	printf("ID: ");
	scanf("%s", id_);
	printf("암호: ");
	scanf("%d", &passwd_);

	/*account *p=NULL;
	p = &ac[0];*/

	for (int i = 0; i < num; i++) {
		//printf("%d %d\n", person, i);
		//printf("%s %d\n", ac[i].id, ac[i].passwd);

		if (strcmp(id_, ac[i].id) == 0) {
			if (passwd_ == ac[i].passwd) {
				printf("이름: %s\t 잔고: %d\n", ac[i].name, ac[i].balance);
				printf("ID: %s\t 암호: %d\n", ac[i].id, ac[i].passwd);
				printf("전화번호: %s\n", ac[i].phone);
				printf("주소: %s\n", ac[i].address);
				printf("\n메뉴를 선택하시려면 아무 키나 누르십시오.\n");
			}
		}
		else {
			continue;
			if(i==num) 
				printf("조회 결과가 없습니다\n");
		}
	}
}

void Deposit(account *ac,int i) {
	char id_[10];
	int passwd_, balance_;
	printf("ID: ");
	scanf("%s", id_);
	printf("암호: ");
	scanf("%d", &passwd_);
	printf("입금액: ");
	scanf("%d", &balance_);
	
	for (int j = 0; j < i; j++) {
		if (!(strcmp(id_, ac[j].id)) && passwd_ == ac[j].passwd) {
			ac[j].balance += balance_;
			printf("\n입금성공: 금액 %d원이 입금되었습니다\n", balance_);
		}
	}

}
void Withdraw(account *ac,int i) {
	char id_[10];
	int passwd_, balance_;
	printf("ID: ");
	scanf("%s", id_);
	printf("암호: ");
	scanf("%d", &passwd_);
	printf("출금액: ");
	scanf("%d", &balance_);

	for (int j = 0; j < i; j++) {
		if (!(strcmp(id_, ac[j].id)) && passwd_ == ac[j].passwd) {
			ac[j].balance -= balance_;
			printf("\n출금성공: 금액 %d원이 출금되었습니다\n", balance_);
		}
	}
}