/*
	교재 : 쉽게 풀어쓴 C언어 express
	페이지 : 525
	날짜 : 2023-02-10
	주제 : 문자입출력(getchar), 에코 0, 버퍼 0, 헤더파일 : <stdio.h>, 줄단위
*/
#include<stdio.h>
int main(void) {

	int ch;
	while ((ch = getchar()) != EOF) {
		putchar(ch);
	}
	return 0;
}
