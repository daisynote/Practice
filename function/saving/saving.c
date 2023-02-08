/*
	교재 : 쉽게 풀어쓰는 C언어
	페이지 : pg387
	공부 날짜 : 2023-02-06
	제목 : 은행 계좌 구현하기
*/
#include<stdio.h>
int save(int amount);
int main(void)
{
	printf("===================\n");
	printf("입금\t출금\t잔고\n");
	printf("===================\n");
	save(10000);
	save(60000);
	save(-10000);
	save(30000);
	printf("===================\n");
}
int save(int amount)
{
	static int balance = 0; // 정적 변수는 함수가 여러번 돌아도 처음 딱 한번만 초기화된다.
	
	balance += amount;
	if (amount > 0) {
		printf("%d\t", amount);
	}
	else {
		printf("\t%d", -amount);
	}
	printf("\t%d\n", balance);
}