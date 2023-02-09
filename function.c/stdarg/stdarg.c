/*
	교재 : 쉽게 풀어쓴 C언어 express
	페이지 : 396
	공부 날짜 : 2023-02-08
	주제 : 가변 매개 변수 함수(variable argument)
*/
#include<stdio.h>
#include<stdarg.h> // 가변 인자들을 제어하기 위한 라이브러리 헤더 파일
int sum(int, ...);
int main(void) {
	int answer = sum(4, 4, 3, 2, 1); // 맨 앞 4는 인수 개수를 뜻함  
	printf("합은 %d입니다.\n", answer);
	return 0;
}
int sum(int num, ...) {
	int answer = 0;
	va_list argptr; // 가변 인자들을 담을 목록 포인터 만들기
	va_start(argptr, num); // 가변 인자 목록 포인터에 들어온 가변인자 셋팅하기
	for (; num > 0; num--) {
		answer += va_arg(argptr, int); // 포인터에서 int크기만큼 값을 추출
	}
	va_end(argptr); // 사용이 끝난 포인터 소멸
	return answer;
}