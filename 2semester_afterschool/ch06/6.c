#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define isdigit(c) if(c>='0'&&c<='9')\
							printf("%c�� �����Դϴ�\n",c);\
							else printf("%c�� ���ڰ� �ƴմϴ�\n",c);
#define isalpha(c) if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))\
								printf("%c�� �����Դϴ�\n",c); \
								else printf("%c�� ���ڰ� �ƴմϴ�\n",c);
int main() {
	char c='g';

	isdigit(c);
	isalpha(c);

}