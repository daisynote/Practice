/*
	교재 : 쉽게 풀어쓴 C언어 express
	페이지 : 398
	공부 날짜 : 2023-02-08
	주제 : 재귀함수(recursion)를 이용해 2진수 구하기
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
void binary(int num) { // 재귀함수에서 꼭 return 값을 써야 하는 건 아니다. return이 다음 함수를 돌 때 필요하면 주고, 아니면 return 없이도 가능

	if (num > 0) {
		binary(num / 2);
		printf("%d", num % 2);
	}
}