// Lab04.c
#include"stdafx.h"
#include <stdio.h>


int main(void)
{
	int year=0;

	printf("������ �Է��Ͻÿ� : \n");
	scanf_s("%d", &year);

	if (year % 4 == 0)
	{
		if (year % 100 != 0)
		{
			printf("%d�⵵�� �����Դϴ�.\n", year);
		}
		else
		{
			if (year % 400 == 0)
			{
				printf("%d�⵵�� �����Դϴ�.\n", year);
				return 0;
			}
			printf("%d�⵵�� ������ �ƴմϴ�.\n", year);
		}

	}
	else
	{
		printf("%d�⵵�� ������ �ƴմϴ�.\n", year);
	}

	

    return 0;
}

