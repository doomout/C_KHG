#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[3][5];  //3���� 4���� ������ ������ 2���� �迭 ����
	int total; //����
	double avg; //���
	int i, j; //�ݺ� ���� ����

	//�л� �� ��ŭ �ݺ�
	for ( i = 0; i < 3; i++)
	{
		printf("4������ ���� �Է� : ");
		for ( j = 0; j < 4; j++) //���� �� ��ŭ �ݺ�
		{
			scanf("%d", &score[i][j]); //���� �Է�
		}
	}

	//�л� �� ��ŭ �ݺ�
	for (i = 0; i < 3; i++)
	{
		total = 0; //�л��� �ٲ� �� ���� 0���� �ʱ�ȭ
		for (j = 0; j < 4; j++)  //���� �� ��ŭ �ݺ�
		{
			total += score[i][j];  //�л����� ���� ����
		}
		avg = total / 4.0; //��� ���
		printf("���� : %d, ��� : %.2lf\n", total, avg); //����, ��� ���
	}

	return 0; //
}