// Lab04.c
#include"stdafx.h"
#include <stdio.h>


int main(void)
{
	int year=0;

	printf("연도를 입력하시오 : \n");
	scanf_s("%d", &year);

	if (year % 4 == 0)
	{
		if (year % 100 != 0)
		{
			printf("%d년도는 윤년입니다.\n", year);
		}
		else
		{
			if (year % 400 == 0)
			{
				printf("%d년도는 윤년입니다.\n", year);
				return 0;
			}
			printf("%d년도는 윤년이 아닙니다.\n", year);
		}

	}
	else
	{
		printf("%d년도는 윤년이 아닙니다.\n", year);
	}

	

    return 0;
}

