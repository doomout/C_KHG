#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char grade;
	char name[20];

	printf("학점 입력 : ");
	scanf("%c", &grade); 
	printf("이름 입력 : ");
	scanf("%s", name);
	printf("%s의 학점은 %c 입니다.\n", name, grade); //입력한 값 출력

	return 0;
}