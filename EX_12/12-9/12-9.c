#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80] = "mango tree";   //char �迭�� ���ڿ� �ʱ�ȭ

	strncpy(str, "apple-pie", 5); //apple-pie ���� 5 ���ڸ� ����
	printf("%s\n", str); //apple tree ���

	return 0; 
}