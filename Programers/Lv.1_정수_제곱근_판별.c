#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>
#include <math.h>


long long solution(long long n)
{

	// 'sqrt(n)'은 반환형이 double형인 함수로 'n'의 제곱근을 계산해준다
	// 그 값이 정수일 경우를 '(int)sqrt(n) == sqrt(n)'조건식으로 구분해준다
	if ((int)sqrt(n) == sqrt(n))
	{
		return (sqrt(n) + 1) * (sqrt(n) + 1);
	}
	else
	{
		return -1;
	}
}

long long solution2(long long n)
{
	long long answer = 0;

	if ((int)sqrt(n) == sqrt(n))
		answer = pow((sqrt(n) + 1), 2);
	else
		answer = -1;

	return answer;
}


int main(void)
{
	printf("%d", solution(144));

    return 0;
}