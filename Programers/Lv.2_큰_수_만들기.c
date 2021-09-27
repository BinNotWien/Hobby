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

    while (number[len]) // const char 복사
    {
        answer[len] = number[len];
        ++len;
    }

    answer[len] = NULL;
    realloc(answer, sizeof(char) * len); // 메모리 재할당

    for (int i = 0; i < k; ++i) // 제거할 수 만큼
    {
        int j = 0;

        while (j < len - 1) // NULL을 뺀 길이
        {
            if (answer[j] < answer[j + 1]) // 큰 수 선별
                break;
            ++j;
        }

        while (j < len - 1)
        {
            answer[j] = answer[j + 1]; // 큰 수 대입, 작은 수 삭제
            ++j;
        }

        --len; // 길이 줄임
        answer[j] = NULL;
    }


    return answer;
}


int main(void)
{
    printf("%s", solution("1924", 2));

	return 0;
}