#include <stdio.h>

int tunnel(void) {
	const int SUV = 170;
	int f, s, t;
	scanf("%d %d %d", &f, &s, &t);

	if (SUV >= f) printf("�浹 %d\n", f);
	else if (SUV >= s) printf("�浹 %d\n", s);
	else if (SUV >= t) printf("�浹 %d\n", t);
	else printf("���� ���\n");

	return 0;
}