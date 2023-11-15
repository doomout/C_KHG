#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);

int main(void)
{
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);
	input_ary(ary, size);
	max = find_max(ary, size);
	printf("배열의 최댓값  : %.1lf\n", max);

	return 0;
}

void  input_ary(double* pa, int size) 
{
	int  i;

	printf("%d개의 실수값 입력 : ", size);
	for (i = 0; i < size; i++) //size의 값에 따라 반복 횟수 결정
	{
		scanf("%lf ", pa + i); 
	}
}

double  find_max(double* pa, int size)
{
	double max;
	int i;

	max = pa[0];  //첫번째 배열 요소의 값을 최댓값으로 설정
	for ( i = 1; i < size; i++) // 두번째 배열  요소부터 max와 비교
	{
		if (pa[i] > max)
			max = pa[i];
	}

	return max; //최댓값 반환
}