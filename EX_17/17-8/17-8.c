#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct address //구조체 선언
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

void print_list(struct address* lp);

int main(void)
{
	//요소가 5개인 구조체 배열 선언 + 초기화
	struct address list[5] = {
		{"장원영", 20, "111-1111", "서울시 마포구"},
		{"안유진", 21, "222-2222", "서울시 영등포구"},
		{"윈터", 22, "333-3333", "경남 마산시"},
		{"카리나", 23, "444-4444", "전남 광주시"},
		{"리즈", 21, "555-5555", "제주시 서귀포구"}
	};

	print_list(list);

	return 0;
}

void print_list(struct address* lp) //매개변수는 구조체 포인터
{
	int i;
	for (i = 0; i < 5; i++) //배열 요소 수 만큼 반복
	{
		printf("%10s %5d %15s %20s\n", (lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
	}
}