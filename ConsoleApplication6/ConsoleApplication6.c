// ConsoleApplication6.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//
#include "stdafx.h"
#include <stdio.h>


//���� �����
int main(void)
{
	float FristNum;
	float SeocondNum;
	float sumNum;

	printf("ù��° ���ڸ� �Է��Ͻÿ�.\n");

	scanf("%f", &FristNum);

	printf("�ι�° ���ڸ� �Է��Ͻÿ�.\n");

	scanf("%f", &SeocondNum);

	sumNum = FristNum + SeocondNum;

	printf("������ ����� %f �̴�.\n", &sumNum);
    
	return 0;
}

