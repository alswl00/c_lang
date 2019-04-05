#include <stdio.h>
main() {
	int i;
	char ch;
	char str[6] = "ABCDE";
	printf("--문자열 변경 전--\n");
	printf("%s \n", str);
	for (i = 0; i < 6; i++) {
		if (str[i] == NULL)
			printf("@");
		else printf("%c ", str[i]);
	}

	//문자열 변경
	/*for (i = 0; i < 3; i++) {
		ch = str[4 - i];
		str[4 - i] = str[i];
		str[i] = ch;
	}
	*/

	//문자열 위치 변경
	for (i = 0; i < 4; i++) {
		ch = str[5 - i];
		str[5 - i] = str[i];
		str[i] = ch;
	}

	printf("\n--문자열 변경 후--\n");
	printf("%s\n", str);
	if (str[0] == NULL)
		printf("@\n");
	else printf("%c ", str[i]);
	

	return 0;
}