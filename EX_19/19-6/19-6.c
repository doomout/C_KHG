#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define VER 7
#define BIT16

int main(void)
{
	int max;

#if VER >= 6  
	printf("���� %d�Դϴ�.\n", VER);
#endif

#ifdef BIT16  //��ũ�θ� BIT16�� ���ǵǾ� ������
	max = 32767; //�� ���� ������
#else  //�ƴϸ�
	max = 2147483647;  //�� ���� ������
#endif

	printf("int �� ������ �ִ밪 : %d\n", max);

	return 0;
}