#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int data[] = { 1,2,3 };
	char data2[] = { 'a','b','c' };
	long long data3[] = { 1,2,3 };

	int* p = &data[0];
	char* q = &data2[0];
	long long* r = &data3[0];

	printf("%d %x\n", p, p);
	printf("%d %x\n", p + 1, p + 1);
	printf("%d %x\n", p + 2, p + 2);

	printf("%d %x\n", q, q);
	printf("%d %x\n", q + 1, q + 1);
	printf("%d %x\n", q + 2, q + 2);

	printf("%d %x\n", r, r);
	printf("%d %x\n", r + 1, r + 1);
	printf("%d %x\n", r + 2, r + 2);

	return 0;
}