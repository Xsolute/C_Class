#include <stdio.h>

int file_3(void) {
	FILE *fp;
	char ch;
	fp = fopen("a.txt", "r");
	if (fp == NULL) {
		printf("���� ���� ����.\n");
		return 1;
	}
	while (1) {
		ch = fgetc(fp); // ������ ���Ϸκ��� �� ���ڸ� �Է��Ѵ�.
		if (ch == EOF) break; // ���ϰ��� -1(EOF)�� ��� �ݺ��� �����Ѵ�.
		putchar(ch); // �о���� ���ڸ� ȭ�鿡 ����Ѵ�.
	}
	fclose(fp);
	return 0;
}