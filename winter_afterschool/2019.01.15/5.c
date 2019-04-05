#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void substitution_cipher(char text[][100]);
int main() {
	FILE *fo,*fi;
	fo=fopen("star.txt","r");
	fi = fopen("star¾ÏÈ£.txt", "w");
	char text[4][100];
	int i=0;
	while (1) {
		if (fgets(text[i], 100, fo) == NULL) break;
		i++;
	}
	
	substitution_cipher(text);

	for(i=0;i<4;i++)
		fprintf(fi,"%s", text[i]);

	fclose(fo);
	fclose(fi);
	return 0;
}
void substitution_cipher(char text[][100]) {
	int i;
	for (i = 0; i < 4; i++) {
		for (int j = 0; j < strlen(text[i]); j++) {
			if (isalpha(text[i][j])) {
				text[i][j] = ((text[i][j] - 'a') + 3) % 26;
				text[i][j] = toupper(text[i][j] + 'a');
			}
		}
	}
}