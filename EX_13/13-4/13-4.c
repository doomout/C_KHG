#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	register int i;  //레지스터 변수
	auto int sum = 0; //지역변수

	for (i = 0; i < 10000; i++)  //반복 과정에서 i를 계속 사용
	{
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}