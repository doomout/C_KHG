#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp; //���� ������ ����
	char str[] = "banana";
	int i;

	fp = fopen("b.txt", "w"); //���� �������� ���� ����

	//������ ����Ǿ����� Ȯ��
	if (fp == NULL)
	{
		printf("���� ������ ���� �߽��ϴ�.\n");
		return 1;
	}

	i = 0;  //���� �迭�� ù��° ���ں��� ���
	while (str[i] != '\0') //�� ���ڰ� �ƴϸ�
	{
		fputc(str[i], fp);  //���ڸ� ���Ͽ� ���
		i++; //���� ���ڷ� �̵�
	}
	fputc('\n', fp);

	fclose(fp); //���� ����

	return 0;
}