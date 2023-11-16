#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int res;
	char ch;

	while (1)
	{
		res = scanf("%c", &ch);  //문자 입력, 컨트롤 + z 누르면 -1 반환
		if (res == -1) break; //-1 반환시 반복 종료
		printf("%d ", ch); //지금까지 입력한 문자 아스키 값 출력
	}
	return 0;
}