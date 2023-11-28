#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct list //�ڱ� ���� ����ü
{
	int num;  //�����͸� �����ϴ� ���
	struct list* next; //����ü �ڽ��� ����Ű�� ������ ����
};

int main(void)
{
	//����ü ���� �ʱ�ȭ
	struct list 
		a = { 10, 0 }, 
		b = { 20, 0 }, 
		c = { 30, 0 };

	struct list* head = &a, * current; //��� ������ �ʱ�ȭ

	a.next = &b; //a�� ������ ����� b�� ����Ŵ  a -> b
	b.next = &c; //b�� ������ ����� c�� ����Ŵ  b -> c

	printf("head->num : %d\n", head->num);  //head �� ����Ű�� a�� num  ��� ���
	printf("head->next->num : %d\n", head->next->num); //head �� b�� num ��� ���

	printf("list all : ");
	current = head; //���� current �����Ͱ� a�� ����Ŵ
	while (current != NULL) //������ ����ü �������� ����ϸ� �ݺ� ����
	{
		printf("%d  ", current->num);
		current = current->next;
	}
	printf("\n");

	return 0;
}