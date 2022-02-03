#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int sum, i, average;
	int num[10];

	for (i = 0; i < 10; i++)
		scanf("%d", &num[i]);

	sum = calculate_sum(num);

	average = sum / 10;
	printf("%d\n", average);

	return 0;
}

int calculate_sum(int* arr) {
	int sum = 0, i;

	for (i = 0; i < 10; i++)
		sum += arr[i];

	return sum;
}