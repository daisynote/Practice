/*
	���� : ���� Ǯ� C��� express
	������ : 398
	���� ��¥ : 2023-02-08
	���� : ����Լ�(recursion)�� �̿��� 2���� ���ϱ�
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void binary(int num);

int main(void) {

	int num;

	scanf("%d", &num);
	binary(num);

	return 0;
}
void binary(int num) { // ����Լ����� �� return ���� ��� �ϴ� �� �ƴϴ�. return�� ���� �Լ��� �� �� �ʿ��ϸ� �ְ�, �ƴϸ� return ���̵� ����

	if (num > 0) {
		binary(num / 2);
		printf("%d", num % 2);
	}
}