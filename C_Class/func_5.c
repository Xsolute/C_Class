#include <stdio.h>

int GetResult() {
	int nResult = 0;
	printf("����(0~100)�� �Է��ϼ���. : ");
	scanf("%d", &nResult);
	return nResult;
}

char GetGrade(int nScore) {
	if (nScore >= 90) return 'A';
	else if (nScore >= 80) return 'B';
	else if (nScore >= 70) return 'C';
	else if (nScore >= 60) return 'D';
	return 'F';
}

int func_5(void) {
	int nResult = 0;
	nResult = GetResult();
	printf("����� ������ '%c'(%d)�Դϴ�.\n", GetGrade(nResult), nResult);
	return 0;
}