#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j;

	for ( i = 0; i < 5; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			if ((i == j) || (i+j == 4)) //i,j  ���� ���ų�, i+j ���� 4�� ���� ���� * ��´�.
			{
				printf("*");
			}
			else //�� �ܿ��� �� ĭ
			{
				printf(" ");
			}
		}
		printf("\n"); //�� ���� ������ ��ĭ�� ������.
	}


	return 0;
}