#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j;

	for ( i = 0; i < 5; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			if ((i == j) || (i+j == 4)) //i,j  값이 같거나, i+j 값이 4와 같을 때만 * 찍는다.
			{
				printf("*");
			}
			else //그 외에는 빈 칸
			{
				printf(" ");
			}
		}
		printf("\n"); //행 끝날 때마다 한칸씩 내린다.
	}


	return 0;
}