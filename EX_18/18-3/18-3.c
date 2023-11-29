#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp; //파일 포인터 선언
	char str[] = "banana";
	int i;

	fp = fopen("b.txt", "w"); //쓰기 전용으로 파일 개방

	//파일이 개방되었는지 확인
	if (fp == NULL)
	{
		printf("파일 생성에 실패 했습니다.\n");
		return 1;
	}

	i = 0;  //문자 배열의 첫번째 문자부터 출력
	while (str[i] != '\0') //널 문자가 아니면
	{
		fputc(str[i], fp);  //문자를 파일에 출력
		i++; //다음 문자로 이동
	}
	fputc('\n', fp);

	fclose(fp); //파일 닫음

	return 0;
}