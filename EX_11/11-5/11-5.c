#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int res;
	char ch;

	while (1)
	{
		res = scanf("%c", &ch);  //���� �Է�, ��Ʈ�� + z ������ -1 ��ȯ
		if (res == -1) break; //-1 ��ȯ�� �ݺ� ����
		printf("%d ", ch); //���ݱ��� �Է��� ���� �ƽ�Ű �� ���
	}
	return 0;
}