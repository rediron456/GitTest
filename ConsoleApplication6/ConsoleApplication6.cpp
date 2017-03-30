// ConsoleApplication6.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include <stdio.h>


//덧셈 연산기
int main(void)
{
	int FristNum;
	int SeocondNum;

	printf("첫번째 숫자를 입력하시오.\n");

	scanf("%f\n", FristNum);

	printf("두번째 숫자를 입력하시오.\n");

	scanf("%f\n", SeocondNum);

	printf("덧셈의 결과는 %f 이다.", FristNum + SeocondNum);
    
	return 0;
}

