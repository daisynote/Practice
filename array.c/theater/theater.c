/*
	���� : ���� Ǯ� C��� express
	������ : 431
	������ ��¥ : 2023-02-08
	���� : �迭 �̿��ؼ� ���� ���� �ý��� �����
*/
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include<stdio.h>
int main(void) {

	printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ� n)\n");

	char ch;
	int seat[SIZE] = { 0 };
	int num;

	scanf("%c", &ch);

	// while(getchar() != '\0'); ���⼭ �� ���� �� ����� �Ǵ� ����? -> char �Է¹޴ٰ� ���ڱ� ���� �Է¹޴µ�? 
	// ����(%d)�� ���ڿ�(%s) �Է¹޴ٰ� ���� %c �Է¹����� ������ �Ǵµ�, �ݴ��� ���� ��� ����.

	if (ch == 'y') {
		printf("-------------------\n");
		printf("1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n");
		printf("-------------------\n");
		printf("���° �¼��� �����Ͻðڽ��ϱ�?\n");

		int i;
		for (i = 0; i < SIZE; i++) {
			printf("%d\t", seat[i]);
		}
		printf("\n");

		scanf("%d", &num);

		for (i = 0; i < SIZE; i++) {
			if (i == num - 1) {
				if (seat[i] != 1) {
					seat[i] = 1;
				}
				else {
					printf("����Ǿ����ϴ�.\n");
				}
			}
			else {
				seat[i] = 0;
			}
			printf("%d\t", seat[i]);
		}
		printf("\n����Ǿ����ϴ�.\n");
	}
	else
		printf("�߸��� �����Դϴ�.\n");
}
