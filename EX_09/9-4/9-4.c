#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;   //���� ����� �ʱ�ȭ
	const int* pa = &a; //������ pa�� ���� a�� ����Ų��.

	printf("���� a �� : %d\n", *pa);  //�����͸� ���� ���� �Ͽ� a ���
	pa = &b; //�����Ͱ� b�� ����Ű�� �Ѵ�. 
	printf("���� b�� �� : %d\n", *pa); //�����Ͱ� b�� ���� ����
	pa = &a; //�����Ͱ� �ٽ� a�� ����Ų��. 
	a = 20; //a�� ���� �����Ͽ� ���� �ٲ۴�.
	printf("���� a�� �� : %d\n", *pa); //�����ͷ� ���� �����Ͽ� �ٲ� ���� ����Ѵ�.

	return 0;
}