#include <stdio.h>

int file_10(void) {
	FILE* input = fopen("me.txt","w");
	fputs("�б� : �������Ʈ����̽��Ͱ���б�\n�� : 1�г� 3��\n��ȣ : 14��\n�̸� : �����\n��ȭ��ȣ : 010-4372-8848",input);
	fclose(input);
	return 0;
}