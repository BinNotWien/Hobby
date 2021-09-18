#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>
#include <math.h>


// a_len은 배열 a의 길이입니다.
// b_len은 배열 b의 길이입니다.
int solution(int a[], size_t a_len, int b[], size_t b_len)
{
    int answer = 0;

    for (int i = 0; i < a_len; i++)
    {
        answer += (a[i] * b[i]);
    }

    return answer;
}

int solution2(int a[], size_t a_len, int b[], size_t b_len)
{
    int answer = 0;

    for (int in = 0; in != a_len; in++)
    {
        if (a[in] != NULL)
        {
            answer = answer + a[in] * b[in];
            printf("%d\n", answer);
        }
    }

    return answer;
}


int main(void)
{
    int a[4] = { 1, 2, 3, 4 };
    int b[4] = { -3, -1, 0, 2 };

    printf("%d", solution2(a, 4, b, 4));


    return 0;
}