#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ary[3];   //�迭 ����
	int* pa = ary; //�����Ϳ� �迭�� ����
	int i; //�ݺ� ���� ����

	*pa = 10; //ù��° �迭 ��ҿ� 10 ����
	*(pa + 1)  = 20; //�ι�° �迭 ��ҿ� 20 ����
	pa[2] = pa[0] + pa[1]; //���ȣ�� �Ἥ pa�� �迭��ó�� ���

	for (i = 0; i < 3; i++)  //��� �迭 ��� ���
	{
		printf("%5d", pa[i]); 
	}

	return 0;
}