// ConsoleApplication6.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//
#include "stdafx.h"
#include <stdio.h>


//덧셈 연산기
int main(void)
{
	float FristNum;
	float SeocondNum;
	float sumNum;

	printf("첫번째 숫자를 입력하시오.\n");

	scanf("%f", &FristNum);

	printf("두번째 숫자를 입력하시오.\n");

	scanf("%f", &SeocondNum);

	sumNum = FristNum + SeocondNum;

	printf("덧셈의 결과는 %f 이다.\n", &sumNum);
    
	return 0;
}

