#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ch; //�Է��� ���ڸ� ������ ����

	while (1)
	{
		ch = getchar(); //Ű���忡�� ���� �Է�
		if (ch == EOF) //��Ʈ�� + z �� �Է� ����
		{
			break;
		}
		putchar(ch); //ȭ�鿡 ���� ���
	}

	return 0;
}