#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char animal[5][20]; //2���� char �迭����
	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]); //���� �� ��� = �迭 ��ü�� ũ�� / �κ� �迭 �ϳ��� ũ��
	for ( i = 0; i < count; i++)
	{
		scanf("%s", animal[i]);
	}

	for ( i = 0; i < count; i++)
	{
		printf("%s\t", animal[i]);
	}

	return 0;
}