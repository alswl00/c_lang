#include <stdio.h>

int main(void)
{
	float pi;
	printf("원주율을 입력하세요.\n");
	scanf_s("%f", &pi);
	printf("%f\n" ,pi);

	char ch1, ch2;
	printf("구분자를 공백으로 두 문자를 입력하세요.\n");
	getchar();//입력버퍼에 있는 문자를 한개 가져오는 함수(입력하지는 않음)=>엔터를 가져옴
	scanf_s("%c %c", &ch1,1,&ch2,1);//getchar 함수를 " %c %c"처럼 공백으로 쓸 수 있음
	printf("ch1=%c ch2=%c\n", ch1, ch2);

	return 0;

}