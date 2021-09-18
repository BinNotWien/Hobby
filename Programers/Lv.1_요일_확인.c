#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>
#include <math.h>


char* solution(int a, int b)
{
    char* arr[] = { "FRI", "SAT","SUN","MON", "TUE", "WED","THU" };

    // ������ ���� �޸𸮸� ���� �Ҵ����ּ���.
    char* answer = (char*)malloc(sizeof(arr));

    int final_day[20] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int total_day = 0;

    for (int i = 0; i < a - 1; i++)
    {
        total_day += final_day[i];
    }

    total_day += b - 1;

    // answer = arr[total_day % 7];  ������
    strcpy(answer, arr[total_day % 7]);

    return answer;
}


int main(void)
{
    printf("\n%s\n", solution(5, 24));

    return 0;
}