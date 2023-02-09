/*
	교재 : 쉽게 풀어쓴 C언어 express
	페이지 : 431
	공부한 날짜 : 2023-02-08
	주제 : 배열 이용해서 극장 예약 시스템 만들기
*/
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include<stdio.h>
int main(void) {

	printf("좌석을 예약하시겠습니까?(y 또는 n)\n");

	char ch;
	int seat[SIZE] = { 0 };
	int num;

	scanf("%c", &ch);

	// while(getchar() != '\0'); 여기서 왜 버퍼 안 비워도 되는 거지? -> char 입력받다가 갑자기 숫자 입력받는데? 
	// 숫자(%d)나 문자열(%s) 입력받다가 문자 %c 입력받으면 문제가 되는데, 반대의 경우는 상관 없다.

	if (ch == 'y') {
		printf("-------------------\n");
		printf("1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n");
		printf("-------------------\n");
		printf("몇번째 좌석을 예약하시겠습니까?\n");

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
					printf("예약되었습니다.\n");
				}
			}
			else {
				seat[i] = 0;
			}
			printf("%d\t", seat[i]);
		}
		printf("\n예약되었습니다.\n");
	}
	else
		printf("잘못된 접근입니다.\n");
}
