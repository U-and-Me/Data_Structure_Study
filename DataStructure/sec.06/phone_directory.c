#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define INIT_CAPACITY 3
#define BUFFER_SIZE 50

char** names;
char** numbers;

int capacity = INIT_CAPACITY; // size of array
int count = 0;

char delim[] = "";

void add();
void find();
void status();
void remove();
void load();
void save();

void init_directory();
void process_command();
int search(char* name);
int read_line(char str[], int limit);

int main() {

	init_directory();
	process_command();

	return 0;
}

void init_directory() {
	names = (char**)malloc(INIT_CAPACITY * sizeof(char*));
	numbers = (char**)malloc(INIT_CAPACITY * sizeof(char*));
}

void process_command() {

}

void add() {
	char buf1[BUFFER_SIZE], buf2[BUFFER_SIZE];

	scanf("%s", buf1);
	scanf("%s", buf2);

	int i = count - 1;
	while (i >= 0 && strcmp(names[i], buf1) > 0) {
		names[i + 1] = names[i];
		numbers[i + 1] = numbers[i];
		i--;
	}

	names[i + 1] = _strdup(buf1);
	numbers[i + 1] = _strdup(buf2);
	count++;

	printf("%s was added successfully. \n", buf1);
}

void find() {
	char buf[BUFFER_SIZE];

	scanf("%s", buf);

	int index = search(buf);
	if (index == -1) {
		printf("No person named '%s' exists. \n", buf);
	}
	else {
		printf("%s \n", numbers[index]);
	}
}

void status() {
	int i;
	for (i = 0; i < count; i++) {
		printf("%s\t%s \n", names[i], numbers[i]);
	}

	printf("Total %d persons. \n", count);
}

void remove() {
	char buf[BUFFER_SIZE];

	scanf("%s", buf);

	int index = search(buf);
	if (index == -1) {
		printf("No person named '%s' exists. \n", buf);
		return;
	}

	int j = index;
	for (; j < count - 1; j++) {
		names[j] = names[j + 1];
		numbers[j] = numbers[j + 1];
	}

	count--;
	printf("'%s' was deleted successfully. \n", buf);

}

void load() {
	char fileName[BUFFER_SIZE];
	char buf1[BUFFER_SIZE];
	char buf2[BUFFER_SIZE];

	scanf("%s", fileName);

	FILE* fp = fopen(fileName, "r"); // 파일 열기
	if (fp == NULL) {
		printf("Open failed. \n");
		return;
	}

	while ((fscnaf(fp, "%s", buf1) != EOF)) {
		fscanf(fp, "%s", buf2);
		names[count] = _strdup(buf1);
		numbers[count] = _strdup(buf2);
		count++;
	}

	fclose(fp);
}

void save() {
	int i;
	char fileName[BUFFER_SIZE];
	char tmp[BUFFER_SIZE];

	scanf("%s", tmp);
	scanf("%s", fileName);

	FILE* fp = fopen(fileName, "w");
	if (fp == NULL) {
		printf("Open failed. \n");
		return;
	}

	for (i = 0; i < count; i++) {
		fprintf(fp, "%s\t%s \n", names[i], numbers[i]);
	}

	fclose(fp);
}

int search(char* name) {
	int i;
	for (i = 0; i < count; i++) {
		if (strcmp(name, names[i]) == 0) {
			return i;
		}
	}

	return -1;
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