#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//함수 선언
void fruit(int count);

int main(void)
{
	fruit(1); //처음 호출하니 1을 인수로 줌

	return 0;
}

//함수 정의

void fruit(int count)
{
	printf("apple\n");

	if (count == 3) return;

	fruit(count + 1); //자신을 다시 호출

	printf("jam\n"); //재귀 함수는 이전에 호출했던 곳으로 돌아가기에 이 부분이 출력된다.
}