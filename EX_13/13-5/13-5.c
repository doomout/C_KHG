#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void add_ten(int a);

int main(void)
{
	int a = 10;
	
	add_ten(a);

	printf("a : %d\n", a);

	return 0; //a : 10 ���0

}

void add_ten(int a)
{
	a = a + 10;
}