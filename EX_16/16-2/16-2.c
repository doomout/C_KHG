#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi; //���� �Ҵ� ������ ������ ������ ����
	int i, sum = 0; //�ݺ� ���� ������ ���� ����

	pi = (int*)malloc(5 * sizeof(int)); //���� ���� 20 ����Ʈ �Ҵ�

	if (pi == NULL) //���� �Ҵ翡 �����ϸ� NULL ������ ��ȯ
	{
		printf("# �޸𸮰� �����մϴ�. \n");  //���� ��Ȳ �޽��� ���
		exit(1); //���α׷� ����
	}
	printf("�ټ� ���� ���̸� �Է��ϼ��� : ");
	for ( i = 0; i < 5; i++)
	{
		scanf("%d", &pi[i]);
		sum += pi[i];
	}

	printf("�ټ� ���� ��� ���� : %.1lf\n", (sum / 5.0));

	//�Ҵ�� �޸� ���� ��ȯ
	free(pi);

	return 0;
}
