#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi; //���� �Ҵ� ������ ������ ������ ����
	double* pd;

	pi = (int*)malloc(sizeof(int)); //�޸� ���� �Ҵ� �� ������ ����
	if (pi == NULL) //���� �Ҵ翡 �����ϸ� NULL ������ ��ȯ
	{ 
		printf("# �޸𸮰� �����մϴ�. \n");  //���� ��Ȳ �޽��� ���
		exit(1); //���α׷� ����
	}
	pd = (double*)malloc(sizeof(double));

	//�����ͷ� ���� �Ҵ� ���� ���
	*pi = 10;
	*pd = 3.4;

	printf("���������� ��� : %d\n", *pi);
	printf("�Ǽ������� ��� : %.1lf\n", *pd);

	//���� �Ҵ� ���� ��ȯ
	free(pi);
	free(pd);

	return 0;
}
