#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[5];
	int i;
	int total = 0;
	double avg = 0.0;
	int count; //�迭 ��� ������ ������ ����

	//�迭 ����� ���� ��� 
	count = sizeof(score) / sizeof(score[0]); //�迭 ����� ����(5��) =  �迭 ��ü ũ��(20����Ʈ) / �迭 ��� 1���� ũ��(4����Ʈ)

	for ( i = 0; i < count; i++)
	{
		scanf("%d", &score[i]); //�ݺ��ϸ� ���� �Է�
	}

	for (i = 0; i < count; i++)
	{
		total += score[i]; //���� ���� ���
	}
	avg = total / (double)count; //������ count �� ������ ��� ���

	for (i = 0; i < count; i++)
	{
		printf("%5d", score[i]); //�Է� ���� ���� ���
	}

	printf("\n");

	printf("��� : %.1lf\n", avg); //��� ���

	return 0;
}