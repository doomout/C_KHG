#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Լ� ����
int get_num(void);

int main(void)
{
	int result;

	result = get_num(); //�Լ� ȣ��
	printf("��ȯ�� : %d\n", result);

	return 0;
}

//�Լ� ����
int get_num(void)
{
	int num;

	printf("��� �Է� : ");
	scanf("%d", &num);

	return num;
}