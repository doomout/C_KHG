#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[80];

	printf("���ڿ� �Է� : ");
	gets(str); //��ĭ�� ������ ���ڿ� �Է�
	puts("�Էµ� ���ڿ� : ");
	puts(str); //�迭�� ����� ���ڿ� ���

	return 0;


}