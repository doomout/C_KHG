#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Լ� ����
void fruit(int count);

int main(void)
{
	fruit(1); //ó�� ȣ���ϴ� 1�� �μ��� ��

	return 0;
}

//�Լ� ����

void fruit(int count)
{
	printf("apple\n");

	if (count == 3) return;

	fruit(count + 1); //�ڽ��� �ٽ� ȣ��

	printf("jam\n"); //��� �Լ��� ������ ȣ���ߴ� ������ ���ư��⿡ �� �κ��� ��µȴ�.
}