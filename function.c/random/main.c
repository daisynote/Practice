/*
	교재 : 쉽게 풀어쓰는 C언어
	페이지 : pg395, 342
	공부 날짜 : 2023-02-06
	제목 : 난수 발생기 작성
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