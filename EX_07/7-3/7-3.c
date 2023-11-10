#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//함수 선언
void print_char(char ch, int count);
void print_line(void);

int main(void)
{
	print_char('@', 5);
	print_line();
	printf("학번     이름     전공     학점\n");
	print_line();

	return 0;
}

//함수 정의
void print_char(char ch, int count)
{
	int i;
	
	for (i = 0; i < count; i++)
	{
		printf("%c", ch);
	}

	return;
}

void print_line(void)
{
	int i;
	for  (i = 0; i < 50; i++)
	{
		printf("-");
	}
	printf("\n");
}