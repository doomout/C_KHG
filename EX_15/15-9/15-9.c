#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 10;
	double b = 3.5;
	void* vp;  //void 포인터 - 변수명 앞에 *을 붙여 포인터임을 표시

	vp = &a;
	printf("a : %d\n", *(int*)vp); //int 형으로 형변환 후 사용

	vp = &b;
	printf("b : %.1lf\n", *(double*)vp); //double 형으로 형변환 후 사용

	return 0;
}