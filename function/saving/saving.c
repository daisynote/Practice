/*
	���� : ���� Ǯ��� C���
	������ : pg387
	���� ��¥ : 2023-02-06
	���� : ���� ���� �����ϱ�
*/
#include<stdio.h>
int save(int amount);
int main(void)
{
	printf("===================\n");
	printf("�Ա�\t���\t�ܰ�\n");
	printf("===================\n");
	save(10000);
	save(60000);
	save(-10000);
	save(30000);
	printf("===================\n");
}
int save(int amount)
{
	static int balance = 0; // ���� ������ �Լ��� ������ ���Ƶ� ó�� �� �ѹ��� �ʱ�ȭ�ȴ�.
	
	balance += amount;
	if (amount > 0) {
		printf("%d\t", amount);
	}
	else {
		printf("\t%d", -amount);
	}
	printf("\t%d\n", balance);
}