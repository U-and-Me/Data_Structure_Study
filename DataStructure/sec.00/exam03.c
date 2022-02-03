#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int* arr = (int*)malloc(4 * sizeof(int)); // 16byte
	arr[0] = 1;
	arr[1] = 2;
	*(arr + 2) = 3;

	int* tmp = (int*)malloc(8 * sizeof(int));
	int i;

	for (i = 0; i < 4; i++)
		tmp[i] = arr[i];

	arr = tmp;

	arr[4] = 4;
	arr[5] = 5;

	printf("%d\n", arr[5]);

	return 0;
}