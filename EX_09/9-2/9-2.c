#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a; //�Ϲ� ���� ����
	int* pa; //������ ����

	pa = &a; //�����Ϳ� a�� ���� �ּ� ����
	*pa = 10; //�����ͷ� ���� a�� 10 ����

	printf("a�� ���� �ּ�  : %p\n", &a);
	printf("�����ͷ� a �� ��� :  %d\n", *pa);
	printf("���������� a �� ��� :  %d\n", a);

	return 0;
}