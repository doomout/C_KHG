#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[5];
	int i;
	int total = 0;
	double avg = 0.0;
	int count; //배열 요소 개수를 저장할 변수

	//배열 요소의 개수 계산 
	count = sizeof(score) / sizeof(score[0]); //배열 요소의 개수(5개) =  배열 전체 크기(20바이트) / 배열 요소 1개의 크기(4바이트)

	for ( i = 0; i < count; i++)
	{
		scanf("%d", &score[i]); //반복하며 성적 입력
	}

	for (i = 0; i < count; i++)
	{
		total += score[i]; //성적 총점 계산
	}
	avg = total / (double)count; //총합을 count 로 나누어 평균 계산

	for (i = 0; i < count; i++)
	{
		printf("%5d", score[i]); //입력 받은 성적 출력
	}

	printf("\n");

	printf("평균 : %.1lf\n", avg); //평균 출력

	return 0;
}