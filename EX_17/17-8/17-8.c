#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct address //����ü ����
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

void print_list(struct address* lp);

int main(void)
{
	//��Ұ� 5���� ����ü �迭 ���� + �ʱ�ȭ
	struct address list[5] = {
		{"�����", 20, "111-1111", "����� ������"},
		{"������", 21, "222-2222", "����� ��������"},
		{"����", 22, "333-3333", "�泲 �����"},
		{"ī����", 23, "444-4444", "���� ���ֽ�"},
		{"����", 21, "555-5555", "���ֽ� ��������"}
	};

	print_list(list);

	return 0;
}

void print_list(struct address* lp) //�Ű������� ����ü ������
{
	int i;
	for (i = 0; i < 5; i++) //�迭 ��� �� ��ŭ �ݺ�
	{
		printf("%10s %5d %15s %20s\n", (lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
	}
}