#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80] = "straw";   //char �迭�� ���ڿ� �ʱ�ȭ

	strcat(str, "berry"); //���ڿ� ���̱�
	printf("%s\n", str); //strawberry ���
	strncat(str, "piece", 3); //3�� ���ڿ� ���̱�
	printf("%s\n", str); //strawberrypie ���

	return 0;
}