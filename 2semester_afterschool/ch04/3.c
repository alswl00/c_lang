#include <stdio.h>

struct student {
	char name[20];
	int kor, eng, math, total;
};

int main() {

	struct student arr[3] = {
		{ "����",100,100,100 },
		{ "�ڳ���", 90, 90, 90 },
		{ "�ֹ̹�", 80, 80, 80 }
	};

	for (int i = 0; i < 3; i++)
		arr[i].total = arr[i].kor + arr[i].eng + arr[i].math;

	for(int i=0;i<3;i++)
		printf("%s %d %d %d %d\n", arr[i].name, arr[i].kor, arr[i].eng, arr[i].math, arr[i].total);
}