#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//���� ����� �ϳ��� �ʱ�ȭ
	char animal1[5][10] = {
		{'d', 'o', 'g', '\0'},
		{'c', 'a', 't', '\0'},
		{'h', 'o', 'r', 's', 'e', '\0'},
		{'r', 'a', 'b', 'b', 'i', 't', '\0'},
		{'t', 'i', 'g', 'e', 'r', '\0'}
	}; 
	//���ڿ� ����� �� �྿ �ʱ�ȭ, ���� �� ���� ����
	char animal2[][10] = {"dog", "tiger", "rabbit", "horse", "cat"};

	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%s\t", animal1[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%s\t", animal2[i]);
	}

	return 0;
}