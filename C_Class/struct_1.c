#include <stdio.h>

struct profile {
	int age;
	double height;
	char *np;
};

struct student {
	struct profile pf;
	int num;
	double grade;
};

int struct_1(void) {
	struct student s1;
	s1.pf.age = 17;
	s1.pf.height = 172.3;
	s1.pf.np = "�����";
	s1.num = 14;
	s1.grade = 1;
	
	printf("�̸� : %s\n", s1.pf.np);
	printf("���� : %d\n", s1.pf.age);
	printf(" Ű  : %.1lf\n", s1.pf.height);
	printf("�й� : %d\n", s1.num);
	printf("���� : %.1lf\n", s1.grade);
	return 0;
}