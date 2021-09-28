#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int* solution(const char* s)
{
    int* answer = (int*)malloc(sizeof(int) * 2);
    int x, c, i;
    // x = 문자열 s의 길이

    for (answer[1] = x = i = 0; s[i]; i++) 
    { 
        s[i] % 2 ? x++ : answer[1]++;
    }
        
    for (answer[0] = 1; x - 1; x = c, answer[0]++)
    {
        for (c = 0; x; x /= 2)
        {
            x % 2 ? c++ : answer[1]++;
        }
    }

    return answer;
    // answer[0] = 이진 변환 횟수, answer[1] = 제거한 0의 개수
}


int main(void)
{
    char* x = "110010101001";
    int* result = solution(x);

    printf("%d %d", *result, result[1]);

	return 0;
}