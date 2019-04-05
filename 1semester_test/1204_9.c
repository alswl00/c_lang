#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	char c;
	printf("임의 문자 입력 : ");
	scanf("%c", &c);
	if ('A' <= c && c <= 'Z') {
		for (char i = 'A'; i <= c; i++) {
				for (char j = 'A'; j < i;j++) 
					printf("#");
				printf("%c", i);
				for(char j=c; j>i;j--)
					printf("#");
				printf("\n");
			}
	}
	else if ('a' <= c && c <= 'z') {
		for (char i = 'a'; i <= c; i++) {
			for (char j = 'a'; j < i; j++)
				printf("#");
			printf("%c", i);
			for (char j = c; j>i; j--)
				printf("#");
			printf("\n");
		}
	}
	


	return 0;
}