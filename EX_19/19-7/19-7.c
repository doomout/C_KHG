#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma pack(push, 1) //����Ʈ ����̾�Ʈ 1�� �ٲ�
typedef struct
{
	char ch; // 1����Ʈ
	int in; //4����Ʈ
}Sample1;   //1 + 4 ����Ʈ = 8����Ʈ

#pragma pack(pop)
typedef struct
{
	char ch; //1����Ʈ
	int in; //4����Ʈ
}Sample2; //1+(3) + 4����Ʈ = 8����Ʈ

int main(void)
{
	printf("Sample1 ����ü�� ũ�� :  %d ����Ʈ\n", sizeof(Sample1));
	printf("Sample2 ����ü�� ũ�� :  %d ����Ʈ\n", sizeof(Sample2));
	
	return 0;
}