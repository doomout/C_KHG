#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char* pary[5];  //������ �迭 ����
	int i;

	//�迭 ��ҿ� ���ڿ� ����
	pary[0] = "dog";
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";

	for ( i = 0; i < 5; i++)
	{
		printf("%s\n", pary[i]);
	}

	return 0;
}