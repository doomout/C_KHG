#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma pack(push, 1) //바이트 얼라이언트 1로 바꿈
typedef struct
{
	char ch; // 1바이트
	int in; //4바이트
}Sample1;   //1 + 4 바이트 = 8바이트

#pragma pack(pop)
typedef struct
{
	char ch; //1바이트
	int in; //4바이트
}Sample2; //1+(3) + 4바이트 = 8바이트

int main(void)
{
	printf("Sample1 구조체의 크기 :  %d 바이트\n", sizeof(Sample1));
	printf("Sample2 구조체의 크기 :  %d 바이트\n", sizeof(Sample2));
	
	return 0;
}