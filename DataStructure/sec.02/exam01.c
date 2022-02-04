#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
	char word[10];

	word[0] = 'h';
	word[1] = 'e';
	word[2] = 'l';
	word[3] = 'l';
	word[4] = 'o';
	word[5] = '\0';

	printf("%s\n", word);

	return 0;
}