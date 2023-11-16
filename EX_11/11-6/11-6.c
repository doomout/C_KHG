#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void my_gets(char* str, int size);

int main(void)
{
	char str[7]; //문자열을 저장할 배열

	my_gets(str, sizeof(str)); //한줄의 문자열을 입력하는 함수
	printf("입력한 문자열 : %s\n", str); //입력한 문자열 출력

	return 0;
}

void my_gets(char* str, int size)
{
	int ch;
	int i = 0;  //str 배열의 첨자

	ch = getchar(); //첫번째 문자 입력
	while ((ch != '\n') && (i < size -1)) //배열의 크기 만큼 입력
	{
		str[i] = ch; //입력한 문자를 배열에 저장
		i++; //첨자 증가
		ch = getchar(); //새로운 문자 입력
	}
	str[i] = '\0'; //입력된 문자열의 끝에 널 문자를 저장
}