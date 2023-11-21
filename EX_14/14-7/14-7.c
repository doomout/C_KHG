#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//1차원 배열 선언과 초기화
	int ary1[4] = { 1, 2, 3, 4 };
	int ary2[4] = { 5, 6, 7, 8 };
	int ary3[4] = { 9, 10, 11, 12 };

	//포인터 배열에 각 배열명으로 초기화 
	int* pary[3] = { ary1, ary2, ary3 };

	int i, j;

	for (i = 0; i < 3; i++)
	{
		for ( j = 0; j < 4; j++)
		{
			printf("%5d", pary[i][j]);
		}
		printf("\n");
	}

	return 0;
}