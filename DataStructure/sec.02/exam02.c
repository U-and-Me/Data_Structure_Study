#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 100

#include <stdio.h>
#include <string.h>

int main() {
	char* words[100];
	char buffer[BUFFER_SIZE];

	int word_cnt = 0;

	while (word_cnt < 4 && scanf("%s", buffer) != EOF) {
		words[word_cnt] = _strdup(buffer);
		word_cnt++;
	}

	return 0;
}