#include <stdio.h>
#define ARRAY_MAX 10

void PrintMenu(void);
void InputStack(void *top);
void SearchStack(void *search);

int array[ARRAY_MAX] = { 0 };

int func_6(void) {

	int nSelect, Top = -1, Search;

	for (;;) {
		PrintMenu();
		scanf("%d", &nSelect);
		switch (nSelect) {
		case 1:
			printf("�� �׸��� �߰��մϴ�.\n\n");
			InputStack(&Top);
			break;
		case 2:
			printf("�˻��� �迭 ��ȣ�� �Է��ϼ��� : \n");
			scanf("%d", &Search);
			SearchStack(&Search);
			break;
		case 3:
			printf("��ü ������ ����մϴ�.\n\n");
			break;
		case 4:
			printf("���� �׸��� �����մϴ�.\n\n");
			break;
		case 0:
			printf("Bye~~!\n\n");
			return 0;
		default:
			printf("�߸��� �Է��Դϴ�.\n\n");
		}
	}
}

void PrintMenu(void) {
	printf("[1]New  [2]Search  [3]Print  [4]Remove  [0]Exit\n");
}

void InputStack(void *top) {

}

void SearchStack(void *search) {

}