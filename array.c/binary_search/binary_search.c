/*
	교재 : 쉽게 풀어쓴 C언어 express
	페이지 : 444
	공부한 날짜 : 2023-02-10
	주제 : 이진탐색
*/
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 16
#include<stdio.h>
int binary_search(int list[], int n, int key);
int main(void) {

	int key;
	int grade[SIZE] = { 2, 6, 11, 13, 18, 20, 22, 27, 29, 30, 34, 38, 41, 42, 45, 47 };

	printf("탐색할 값을 입력하세요:");
	scanf("%d", &key);
	printf("탐색 결과 = %d\n", binary_search(grade, SIZE, key));
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
	return -1; // 값이 있는지 없는지 보려면 최소한 2의 n번은 돌아가야 돼, 그리고 없으면 -1반환 여기서는 최소 4번 돌아가ㅅㅅㅅㅅㅅㅎㅎ6ㅎ6
}