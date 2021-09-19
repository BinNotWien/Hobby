#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
#include <string.h>

int* solution(long long n) 
{
    int* answer = (int*)malloc(sizeof(int) * 12);

    for (int i = 0; n != 0; i++) 
    {
        answer[i] = n % 10; 
        n /= 10;
    }

    return answer;
}


int main(void)
{
    // 12345 -> [ 5, 4, 3, 2, 1 ]

    return 0;
}