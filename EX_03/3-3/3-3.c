#include <stdio.h>

int main(void)
{
	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123451234512345;

	printf("short 형 변수 출력 : %d\n", sh);
	printf("int 형 변수 출력 : %d\n", in);
	printf("long 형 변수 출력 : %ld\n", ln);
	printf("long long 형 변수 출력 : %lld\n", lln);
	printf("long long 형의 크기 : %d 바이트\n", sizeof(long long));

	return 0;
}