#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "student.h"

int main(void)
{
	Student a = { 315, "±èÀç¹ú" };

	printf("ÇÐ¹ø : %d, ÀÌ¸§ : %s\n", a.num, a.name);

	return 0;
}