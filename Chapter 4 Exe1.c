/*
**计算一个数的平方根
*/
#include<stdio.h>
void fun(float s) {
	float i, j;
	i = 1;
	do {
		j = i;
		i = (j + s / j) / 2;
		printf("%f\n",i);
	} while (j != i);
}

void main() {
	float a;
	start:	scanf_s("%f", &a);
	if (a <= 0) {
		printf("Invalid number\n");
		goto start;
	}
	fun(a);
	getchar();
	getchar();
}
