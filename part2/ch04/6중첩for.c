//������
/*int i,j;
//scanf("%d %d", &i,&k);
for (i=1; i<=9; i++) {
for (j = 2; j <= 9; j++) {
printf("%d * %d = %2d\t", j, i, i*j);
}
//printf("\n");
}*/

//@ž
/*int i, j;
for (i = 0; i < 4; i++) {
for (j = 0; j <3; j++) {
printf("@");
}
printf("\n");
}*/

//ABCDž
int i, j;
for (i = 1; i <= 4; i++) {
	for (j = 1; j <= i; j++) {
		printf("%c", i + 64);
	}
	printf("\n");
}