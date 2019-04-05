#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct product {
	char name[20];
	int price;
	int stock;
};

int main(void){
	struct product prd1; 
	struct product prd2;
	scanf("%s %d %d", prd2.name, &prd2.price, &prd2.stock);
	prd1.price = 15000;
	prd1.stock = 30;
	strcpy(prd1.name, "커피믹스");

	printf("%s : %d원, 재고량=%d\n", prd1.name, prd1.price, prd1.stock);
	printf("%s : %d원, 재고량=%d\n", prd2.name, prd2.price, prd2.stock);

	return 0;
}