#include <stdio.h>

int main(void)
{
	printf("Be happy\n");
	printf("12345678901234567890\n");
	printf("My\tfriend\n");

	printf("Goot\bd\tchance\n"); //Goot를 출력하고 한 칸 왼쪽으로 이동(\b) t를 d로 바꾸고 탭 이동(\t) chance를 출력하고 줄 바꿈 (\n)
	printf("Cow\rw\a\n"); //맨 앞으로 이동(\r)해 C를 w로 바꾸고 벨소리(\a)를 내고 줄을 바꿈(\n)

	return 0;
}