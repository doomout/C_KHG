#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[80] = "applejam";
	
	printf("���� ���ڿ� : %s\n", str); //���ڿ� �ʱ�ȭ
	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("�Է� �� ���ڿ� : %s\n", str);

	return 0;
}