#pragma once
#ifndef MENU_H
#define MENU_H

#define OPEN_AC 1
#define PRT_AC 2
#define DEPOSIT 3
#define WITHDRAW 4
#define QUIT 0

typedef struct account {
	char name[20];
	char id[10];
	int passwd;
	char address[100];
	char phone[13];
	int balance;
}account;

void Open_Ac(account *ac,int i);
void Find_Ac(account *ac,int num);
void Deposit(account *ac,int i);
void Withdraw(account *ac,int i);
//extern person;
#endif