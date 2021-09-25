#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

long long solution(int w, int h) 
{
	long long answer = 0;
	long long block = 0;

	// 대각선으로 잘릴 경우, 동일한 정사각형의 개수를 가지는 직각삼각형이 두개 만들어진다
	// 이를 기울기 * 행의 좌표(w*i / h)를 통해 'block'을 구하여
	// 직각삼각형에 들어가는 정사각형 수를 구하고 2배를 해주면서 'answer'을 구하는 동작
	for (int i = 0; i < h; i++) 
	{
		block = (long long)w * i / h;

		answer += (2 * block);
	}

	return answer;
}

long long gcd(int a, int b) // 유클리드 호제법 재귀
{
	if (a == 0) 
		return b;

	return gcd(b % a, a);
}
long long solution2(int w, int h)
{
	return (long long)w * (long long)h - w - h + gcd(w, h);
}

int main(void)
{
	printf("%lld", solution(15, 12));

	return 0;
}