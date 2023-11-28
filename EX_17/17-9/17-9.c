#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct list //자기 참조 구조체
{
	int num;  //데이터를 저장하는 멤버
	struct list* next; //구조체 자신을 가리키는 포인터 변수
};

int main(void)
{
	//구조체 변수 초기화
	struct list 
		a = { 10, 0 }, 
		b = { 20, 0 }, 
		c = { 30, 0 };

	struct list* head = &a, * current; //헤드 포인터 초기화

	a.next = &b; //a의 포인터 멤버가 b를 가르킴  a -> b
	b.next = &c; //b의 포인터 멤버가 c를 가르킴  b -> c

	printf("head->num : %d\n", head->num);  //head 가 가르키는 a의 num  멤버 사용
	printf("head->next->num : %d\n", head->next->num); //head 로 b의 num 멤버 사용

	printf("list all : ");
	current = head; //최초 current 포인터가 a를 가르킴
	while (current != NULL) //마지막 구조체 변수까지 출력하면 반복 종료
	{
		printf("%d  ", current->num);
		current = current->next;
	}
	printf("\n");

	return 0;
}