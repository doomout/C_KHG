#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define VER 7
#define BIT16

int main(void)
{
	int max;

#if VER >= 6  
	printf("버전 %d입니다.\n", VER);
#endif

#ifdef BIT16  //매크로명 BIT16이 정의되어 있으면
	max = 32767; //이 문장 컴파일
#else  //아니면
	max = 2147483647;  //이 문장 컴파일
#endif

	printf("int 형 변수의 최대값 : %d\n", max);

	return 0;
}