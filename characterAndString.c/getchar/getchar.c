/*
	���� : ���� Ǯ� C��� express
	������ : 525
	��¥ : 2023-02-10
	���� : ���������(getchar), ���� 0, ���� 0, ������� : <stdio.h>, �ٴ���
*/
#include<stdio.h>
int main(void) {

	int ch;
	while ((ch = getchar()) != EOF) {
		putchar(ch);
	}
	return 0;
}
