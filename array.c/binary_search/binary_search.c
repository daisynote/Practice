/*
	���� : ���� Ǯ� C��� express
	������ : 444
	������ ��¥ : 2023-02-10
	���� : ����Ž��
*/
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 16
#include<stdio.h>
int binary_search(int list[], int n, int key);
int main(void) {

	int key;
	int grade[SIZE] = { 2, 6, 11, 13, 18, 20, 22, 27, 29, 30, 34, 38, 41, 42, 45, 47 };

	printf("Ž���� ���� �Է��ϼ���:");
	scanf("%d", &key);
	printf("Ž�� ��� = %d\n", binary_search(grade, SIZE, key));
	return 0;
}
int binary_search(int list[], int n, int key) {
	int low, middle, high;

	low = 0; 
	high = n - 1;

	while (low <= high) {
		printf("[%d %d]\n", low, high);
		middle = (low + high) / 2;
		if (key == list[middle]) {
			return middle; 
		}
		else if (key > list[middle]) {
			low = middle + 1;
		}
		else {
			high = middle - 1;
		}
	}
	return -1; // ���� �ִ��� ������ ������ �ּ��� 2�� n���� ���ư��� ��, �׸��� ������ -1��ȯ ���⼭�� �ּ� 4�� ���ư���������������6��6
}