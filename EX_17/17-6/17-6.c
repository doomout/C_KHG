#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct score //����ü ����
{
	int kor;
	int eng;
	int math;
};

int main(void)
{
	struct score doom = {90,80,70};  //����ü ���� ���� + �ʱ�ȭ
	struct score* ps = &doom; //����ü �����Ϳ� �ּ� ����

	//����ü �����ͷ� ��� ����
	printf("���� : %d\n", (*ps).kor); // . �����ڰ� *���� �켱������ ���Ƽ� *�� ()�� ������� �Ѵ�.

	//-> ������ ������� ��� ����
	printf("���� : %d\n", ps -> eng); 
	printf("���� : %d\n", ps -> math);

	return 0;
}