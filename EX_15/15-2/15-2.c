#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap_ptr(char** ppa, char** ppb);

int main(void)
{
	char* pa = "success";
	char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);   //�ٲٱ� ���� ���ڿ� ���
	swap_ptr(&pa, &pb);							  //�Լ� ȣ��
	printf("pa -> %s, pb -> %s\n", pa, pb);   //�ٲ� �Ŀ� ���ڿ� ���

	return 0;
}

//���ڿ� ��ü�� �ٲٴ� ���� �ƴ� ���ڿ��� ����Ű�� �����͸� �ٲٴ� ��
void swap_ptr(char** ppa, char** ppb)
{
	char* pt;

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}