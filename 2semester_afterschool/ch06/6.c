#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define isdigit(c) if(c>='0'&&c<='9')\
							printf("%c는 숫자입니다\n",c);\
							else printf("%c는 숫자가 아닙니다\n",c);
#define isalpha(c) if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))\
								printf("%c는 문자입니다\n",c); \
								else printf("%c는 문자가 아닙니다\n",c);
int main() {
	char c='g';

	isdigit(c);
	isalpha(c);

}