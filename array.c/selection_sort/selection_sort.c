/*
	���� : ���� Ǯ� C��� express
	������ : 440
	������ ��¥ : 2023-02-09
	���� : ��������
*/
#include<stdio.h>
#define SIZE 10
int main(void) {

	int list[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };
	int i, min, minIndex = 0, temp = 0;

	min = list[minIndex];

	for (i = 1; i < SIZE; i++) {
		if (list[i] < min) {
			temp = list[i];
			list[i] = list[minIndex];
			list[minIndex] = temp;
		}
		min = list[i];
 	}
	for (i = 0; i < SIZE; i++) {
		printf("%d\t", list[i]);
	}
	return 0;
}