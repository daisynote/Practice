/*
	���� : ���� Ǯ� C��� express
	������ : 396
	���� ��¥ : 2023-02-08
	���� : ���� �Ű� ���� �Լ�(variable argument)
*/
#include<stdio.h>
#include<stdarg.h> // ���� ���ڵ��� �����ϱ� ���� ���̺귯�� ��� ����
int sum(int, ...);
int main(void) {
	int answer = sum(4, 4, 3, 2, 1); // �� �� 4�� �μ� ������ ����  
	printf("���� %d�Դϴ�.\n", answer);
	return 0;
}
int sum(int num, ...) {
	int answer = 0;
	va_list argptr; // ���� ���ڵ��� ���� ��� ������ �����
	va_start(argptr, num); // ���� ���� ��� �����Ϳ� ���� �������� �����ϱ�
	for (; num > 0; num--) {
		answer += va_arg(argptr, int); // �����Ϳ��� intũ�⸸ŭ ���� ����
	}
	va_end(argptr); // ����� ���� ������ �Ҹ�
	return answer;
}