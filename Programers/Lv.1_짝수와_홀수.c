#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>


char* solution(int num)
{
    // ������ ���� �޸𸮸� ���� �Ҵ����ּ���
    char* answer = (char*)malloc(5 - num % 2);

    if (num % 2 == 0)
    {
        answer = "Even";
    }
    else
    {
        answer = "Odd";
    }

    return answer;

    // return num%2==0 ? "Even":"Odd";
}


int main(void)
{
    printf("%s", solution(3));

    return 0;
}