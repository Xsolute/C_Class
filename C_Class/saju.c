#include <stdio.h>

int saju(void) {
	int y, m, d, result;
	
	printf("����� ���ָ� ���帳�ϴ�.\n����, ��, ���� ���ʴ�� �Է��ϼ��� : \n");
	scanf("%d %d %d", &y, &m, &d);
	result = (y - m + d) % 10;
	if (result == 0) printf("����� ���ִ� ����Դϴ�.\n");
	else printf("����� ���ִ� �׷������Դϴ�.\n");
	return 0;
}