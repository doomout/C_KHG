#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct vision //����ü ����
{
	double left;
	double right; 
};

struct vision exchange(struct vision robot);

int main(void)
{
	struct vision robot;

	printf("�÷� �Է� : ");
	scanf("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("�ٲ� �÷� : %.1lf  %.1lf\n", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot) //����ü�� ��ȯ�ϴ� �Լ�
{
	double temp;

	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot;
}