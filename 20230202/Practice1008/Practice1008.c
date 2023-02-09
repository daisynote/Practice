#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a, b;
	double rslt = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	rslt = (double)a / b;
	printf("%0.9lf", rslt);
	return 0;
}