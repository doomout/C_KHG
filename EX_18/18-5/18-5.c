#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ch; //�Է��� ���ڸ� ������ ����

	while (1)
	{
		ch = fgetc(stdin); //Ű���忡�� ���� �Է�
		if (ch == EOF) //��Ʈ�� + z �� �Է� ����
		{
			break;
		}
		fputc(ch, stdout); //ȭ�鿡 ���� ���
	}

	return 0;
}