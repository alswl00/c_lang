#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
void substitution_cipher(int, char []);
void decryption(int shift, char cipher[]);
int main() {
	char text[20];
	int shift;
	char cipher[20];
	printf("암호화할 문장 입력>>");
	scanf("%[^\n]s", text);
	printf("shift할 갯수 입력>>");
	scanf("%d", &shift);
	substitution_cipher(shift, text);
	printf("\n");
	printf("복호화할 암호 입력>>");
	gets(cipher);
	printf("shift한 갯수 입력>>");
	scanf("%d", &shift);
	decryption(shift, cipher);
	return 0;
}
void substitution_cipher(int shift, char text[]) {
	char cipher[41] = { '\n' };
	int i, len;
	len = strlen(text);
	printf("\n한자암호\n");
	printf("평문    : %s\n", text);

	for (i = 0; i < len; i++)
		cipher[i]=((text[i] - 'a') + shift) % 26;

	for (i = 0; i < len; i++)
		cipher[i] = toupper(cipher[i] + 'a');
	printf("암호문 : %s\n", cipher);
}
void decryption(int shift, char cipher[]) {
	char text[41] = { '\n' };
	int i, len;
	len = strlen(cipher);

	for (i = 0; i < len; i++)
		text[i] = ((cipher[i] - 'A') + shift+26) % 26+'a';

	for (i = 0; i < len; i++)
		cipher[i] = toupper(cipher[i] + 'a');
	printf("복원문 : %s\n", text);
}