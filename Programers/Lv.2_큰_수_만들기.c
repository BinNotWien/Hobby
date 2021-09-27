#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

char* solution(const char* number, int k)
{
    char* answer = (char*)malloc(sizeof(char) * 1000000);
    int len = 0;

    while (number[len]) // const char ����
    {
        answer[len] = number[len];
        ++len;
    }

    answer[len] = NULL;
    realloc(answer, sizeof(char) * len); // �޸� ���Ҵ�

    for (int i = 0; i < k; ++i) // ������ �� ��ŭ
    {
        int j = 0;

        while (j < len - 1) // NULL�� �� ����
        {
            if (answer[j] < answer[j + 1]) // ū �� ����
                break;
            ++j;
        }

        while (j < len - 1)
        {
            answer[j] = answer[j + 1]; // ū �� ����, ���� �� ����
            ++j;
        }

        --len; // ���� ����
        answer[j] = NULL;
    }


    return answer;
}


int main(void)
{
    printf("%s", solution("1924", 2));

	return 0;
}