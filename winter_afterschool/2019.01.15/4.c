#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
void substitution_cipher(int, char []);
void decryption(int shift, char cipher[]);
int main() {
	char text[20];
	int shift;
	char cipher[20];
	printf("��ȣȭ�� ���� �Է�>>");
	scanf("%[^\n]s", text);
	printf("shift�� ���� �Է�>>");
	scanf("%d", &shift);
	substitution_cipher(shift, text);
	printf("\n");
	printf("��ȣȭ�� ��ȣ �Է�>>");
	gets(cipher);
	printf("shift�� ���� �Է�>>");
	scanf("%d", &shift);
	decryption(shift, cipher);
	return 0;
}
void substitution_cipher(int shift, char text[]) {
	char cipher[41] = { '\n' };
	int i, len;
	len = strlen(text);
	printf("\n���ھ�ȣ\n");
	printf("��    : %s\n", text);

	for (i = 0; i < len; i++)
		cipher[i]=((text[i] - 'a') + shift) % 26;

	for (i = 0; i < len; i++)
		cipher[i] = toupper(cipher[i] + 'a');
	printf("��ȣ�� : %s\n", cipher);
}
void decryption(int shift, char cipher[]) {
	char text[41] = { '\n' };
	int i, len;
	len = strlen(cipher);

	for (i = 0; i < len; i++)
		text[i] = ((cipher[i] - 'A') + shift+26) % 26+'a';

	for (i = 0; i < len; i++)
		cipher[i] = toupper(cipher[i] + 'a');
	printf("������ : %s\n", text);
}