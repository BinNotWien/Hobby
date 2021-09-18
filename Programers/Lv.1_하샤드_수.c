#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>


bool solution(int x)
{
    int dx = x;
    int sum = 0;

    while (x)
    {
        sum += x % 10;
        x /= 10;
    }

    if (dx % sum == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    printf(solution(12) ? "ture" : "false");

    return 0;
}