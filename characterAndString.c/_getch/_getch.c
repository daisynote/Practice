/*
	���� : ���� Ǯ� C��� express
	������ : 526
	��¥ : 2023-02-10
	���� : ���������(_getch), ���� x, ���� x, ������� : <conio.h>, ���� ����, ���� ���� x
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