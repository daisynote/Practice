/*
	교재 : 쉽게 풀어쓴 C언어 express
	페이지 : 526
	날짜 : 2023-02-10
	주제 : 문자입출력(_getch), 에코 x, 버퍼 x, 헤더파일 : <conio.h>, 문자 단위, 문자 수정 x
*/
#include<stdio.h>
#include<conio.h>
int main(void) {

	int ch;
	while ((ch = _getch()) != 'q') {
		_putch(ch);
	}
	return 0;
}