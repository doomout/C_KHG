#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct address //����ü ����
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

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
	int i;

	for ( i = 0; i < 5; i++) //�迭 ��Ҽ� ��ŭ �ݺ�
	{
		printf("%10s %5d %15s %20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}

	return 0;
}