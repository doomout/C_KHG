#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi; //동적 할당 영역을 연결할 포인터 연결
	int size = 5; //한번에 할당된 저장 공간의 크기,  int형 변수 5개씩
	int count = 0; //현재 입력된 양수 개수
	int num; //양수를 입력할 변수
	int i; //반복 제어 변수

	pi = (int*)calloc(size, sizeof(int)); //일단 5개의 저장공단 할당.
	while (1)
	{
		printf("양수만 입력하세요 => ");
		scanf("%d", &num); //데이터 입력
		
		if (num <= 0) break; //0또는 음수 입력시 종료

		if (count == size) //저장공간 모두 사용하면...
		{
			size += 5; //크기를 늘려서 재할당.
			pi = (int*)realloc(pi, size * sizeof(int));
		}
		pi[count++] = num;
	}
	for ( i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
	}

	//할당된 메모리 영역 반환
	free(pi);

	return 0;
}
