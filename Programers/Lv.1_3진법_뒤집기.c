#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
#include <string.h>

int solution(int n)
{
    int i = 0, j = 0;
    int temp, arr[1000];
    int answer = 0;

    while (n) // 3진수 뒤집기
    {
        arr[i++] = n % 3;
        n /= 3;
    }

    while (j < i) // 3진수 -> 10진수
    {
        answer = 3 * answer + arr[j++];
    }

    return answer;
}


int solution2(int n) 
{
    int temp = 0;
    int cn = n;

    while (cn != 0)
    {
        int remain = cn % 3;

        temp *= 3;

        temp += remain;

        cn /= 3;

    }


    return temp;
}


int main(void)
{
	printf("%d", solution2(125));

	return 0;
}