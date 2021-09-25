#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int solution(int n)
{
    int answer = 0;
    int first = 0;
    int second = 1;

    if (n == 1) 
    {
        return 1;
    }

    for (int i = 2; i <= n; i++) 
    {
        answer = (first + second) % 1234567; // 매번 나눠야 함
        first = second;
        second = answer;
    }

    return answer;
}

int main(void)
{
	printf("%d", solution(15));

	return 0;
}