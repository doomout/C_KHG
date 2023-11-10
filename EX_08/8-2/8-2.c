#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[5];
	int i;
	int total = 0;
	double avg  = 0.0;

	for ( i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]); //반복하며 성적 입력
	}

	for ( i = 0; i < 5; i++)
	{
		total += score[i]; //성적 총점 계산
	}
	avg = total / 5.0; //평균 계산

	for ( i = 0; i < 5; i++)
	{
		printf("%5d", score[i]); //입력 받은 성적 출력
	}

	printf("\n");
	
	printf("평균 : %.1lf\n", avg); //평균 출력

	return 0;
}