#include <stdio.h>

int main(void)
{
	printf("Be happy\n");
	printf("12345678901234567890\n");
	printf("My\tfriend\n");

	printf("Goot\bd\tchance\n"); //Goot�� ����ϰ� �� ĭ �������� �̵�(\b) t�� d�� �ٲٰ� �� �̵�(\t) chance�� ����ϰ� �� �ٲ� (\n)
	printf("Cow\rw\a\n"); //�� ������ �̵�(\r)�� C�� w�� �ٲٰ� ���Ҹ�(\a)�� ���� ���� �ٲ�(\n)

	return 0;
}