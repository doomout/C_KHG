#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է�  : ");
	fgets(str, sizeof(str), stdin); //�迭��, �迭�� ũ��, ǥ�� �Է�
	printf("�Է��� ���ڿ��� %s�Դϴ�.\n", str);

	return 0;
}