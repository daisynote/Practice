/*
	���� : ���� Ǯ��� C���
	������ : pg395, 342
	���� ��¥ : 2023-02-06
	���� : ���� �߻��� �ۼ�
*/
#include<stdio.h>

extern unsigned random_i();
extern double random_f();

extern int MOD;

int main(void) {

	int i;

	MOD = 10;

	for (i = 0; i < 10; i++) {
		printf("%d\n", random_i());
	}

	return 0;
}