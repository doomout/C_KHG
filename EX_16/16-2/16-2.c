#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi; //동적 할당 영역을 연결할 포인터 연결
	int i, sum = 0; //반복 제어 변수와 누적 변수

	pi = (int*)malloc(5 * sizeof(int)); //저장 공간 20 바이트 할당

	if (pi == NULL) //동적 할당에 실패하면 NULL 포인터 반환
	{
		printf("# 메모리가 부족합니다. \n");  //예외 상황 메시지 출력
		exit(1); //프로그램 종료
	}
	printf("다섯 명의 나이를 입력하세요 : ");
	for ( i = 0; i < 5; i++)
	{
		scanf("%d", &pi[i]);
		sum += pi[i];
	}

	printf("다섯 명의 평균 나이 : %.1lf\n", (sum / 5.0));

	//할당된 메모리 영역 반환
	free(pi);

	return 0;
}
