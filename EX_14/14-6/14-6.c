#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char* pary[5];  //포인터 배열 선언
	int i;

	//배열 요소에 문자열 대입
	pary[0] = "dog";
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";

	for ( i = 0; i < 5; i++)
	{
		printf("%s\n", pary[i]);
	}

	return 0;
}