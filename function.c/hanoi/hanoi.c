/*
	교재 : 쉽게 풀어쓴 C언어 express
	페이지 : 404
	공부 날짜 : 2023-02-08
	주제 : 재귀함수 이용해서 하노이탑 알고리즘 작성
*/
#include<stdio.h>

void hanoi_tower(int n, char from, char tmp, char to);

int main(void) {

	hanoi_tower(4, 'A', 'B', 'C');

	return 0;
}

void hanoi_tower(int n, char from, char tmp, char to) {
	if (n == 1) {
		printf("판 1을 %c에서 %c로 옮긴다.\n", from, to);
	}
	else {
		hanoi_tower(n - 1, from, to, tmp);
		printf("판 %d를 %c에서 %c로 옮긴다.\n", n, from, to);
		hanoi_tower(n - 1, tmp, from, to);
	}
}
