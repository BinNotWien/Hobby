#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>


int gcd(int a, int b) // 유클리드 호제법
{
    int c;

    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}

int lcs(int a, int b) // 최소공배수
{
    return a * b / gcd(a, b);
}

int solution(int arr[], size_t arr_len)
{
    int answer = 1;

    for (int i = 0; i < arr_len; i++)
    {
        answer = lcs(answer, arr[i]);
    }

    return answer;
}

int solution2(int arr[], size_t arr_len)
{
    long answer = 1;
    int sw = 0;

    while (sw != 1)
    {
        for (int j = 0; j < arr_len; j++)
        {
            if (answer % arr[j] != 0) sw = 1;
        }

        if (sw == 0)
        {
            break;
        }
        else
        {
            answer++;
        }
        sw = 0;
    }

    return answer;
}

int main(void)
{
    int arr[15] = { 2,6,8,14 };

    printf("%d\n", solution(arr, 4));
    printf("%d\n", solution2(arr, 4));

    return 0;
}