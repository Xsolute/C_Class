#include <stdio.h>

int sum(int num) {
	if (num == 1) return 1;
	else return (num + sum(num - 1));
}

int selffunc_2(void) {
	int n;
	for (;;) {
		scanf("%d", &n);
		if (n > 0 && n <= 100) {
			printf("%d\n", sum(n));
		}
		else printf("�ٽ� �Է��Ͻʽÿ�.\n");
	}
	return 0;
}