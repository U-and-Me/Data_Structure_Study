#include<stdio.h>
#include <ctype.h>

read_line_with_compression(char, int);

int main() {

	char line[80];

	while (1) {
		printf("$ ");
		int len = read_line_with_compression(line, 80);
	}

	return 0;
}

int read_line_with_compression(char compressed[], int limit) {
	int ch, i = 0;

	while ((ch = getchar()) != '\n') {
		if (i < limit - 1 && (!isspace(ch) || i > 0 && !isspace(compressed[i - 1]))) {
			compressed[i++] = ch;
		}
	}

	// 마지막이 공백일 경우
	if (i > 0 && isspace(compressed[i - 1])) {
		i--;
	}

	compressed[i] = '\0';

		return i;
		
}