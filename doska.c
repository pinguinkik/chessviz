#include <stdio.h>
#include <string.h>
int main()
{
	int j;
	char a[9][9];
	char gl[] = {'r','n','b','q','k','b','n','r'};
	char p = 'p';
	memset(a, ' ', sizeof(a));
	for(j = 0; j < 8; j++) {
		a[j][0] = 56 - j;
	}
	for(j = 1; j < 9; j++) {
		a[8][j] = 96 + j;
	}
	for(j = 1; j < 9; j++) {
		a[0][j] = gl[j-1];
		a[7][j] = gl[j-1] - 32;
		a[1][j] = p;
		a[6][j] = p - 32;
	}
	for(j = 0; j < 9; j++) {
		for(int g = 0; g < 9; g++) {
			printf("%c", a[j][g]);
		}
		printf("\n");
	}
	return 0;
}