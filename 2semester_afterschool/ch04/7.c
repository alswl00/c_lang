#include <stdio.h>

enum season { spring, summer, fall, winter };
int main() {
	enum season ss;
	char *cp=NULL;
	ss = spring;

	switch (ss) {
	case spring:
		cp = "inline"; break;
	case summer:
		"swimming"; break;
	case fall:
		cp = "trip"; break;
	case winter:
		cp = "skiing"; break;
	}
	printf("���� ����Ȱ�� => %s\n", cp);
	return 0;
}