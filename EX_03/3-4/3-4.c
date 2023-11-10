#include <stdio.h>

int main(void)
{
	unsigned int a;

	a = 4294967295;  //큰 양수 저장
	printf("%d\n", a);  //음수가 출력
	a = -1; //음수 저장
	printf("%u\n", a); 

	return 0; 
}