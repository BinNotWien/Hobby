#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>


int solution(int n)
{
    int answer = 0;

    while (n > 0)
    {
        answer += n % 10;
        n /= 10;
    }

    return answer;
}


int main(void)
{
    printf("%d", solution(987));

    return 0;
}