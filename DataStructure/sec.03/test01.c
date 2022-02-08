#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define BUFFER_SIZE 100

int read_line(char str[], int limit);

int main() {
	
	char buf[BUFFER_SIZE];

	while (1) {
		printf("$ ");

		/*
		fgets(buf, BUFFER_SIZE, stdin); // 라인 단위로 입력받기
		buf[stelen(buf) - 1] = '\0';
		*/

		int len = read_line(buf, BUFFER_SIZE);

			printf("%s:%d\n", buf, len);
	}

	return 0;
}

int read_line(char str[], int limit) {
	int ch, i = 0;

	while ((ch = getchar()) != '\n') {
		if (i < limit - 1)
			str[i++] = ch;
	}

	str[i] = '\0';

	return i;
}