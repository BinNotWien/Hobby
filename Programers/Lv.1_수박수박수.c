#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>


char* solution(int n)
{
    // ������ ���� �޸𸮸� ���� �Ҵ����ּ���.
    // ����Ʈ ���� �� ���� ����, �̷л� ��ȿ
    char* add1 = "��";
    char* add2 = "��";
    int len = strlen(add1);
    char* answer = (char*)malloc(n * len);

    for (int i = 0; i < n; i++)
    {
        strcpy(&answer[i * len], i % 2 == 0 ? add1 : add2);
    }

    return answer;
}


int main(void)
{
    printf("%s", solution(0));

    return 0;
}