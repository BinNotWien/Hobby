#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int* solution(const char* s)
{
    int answer[2] = { 0, };
    int x, c, i;
    // x = 제거할 0의 개수
    // c = 0 제거 후 문자열의 길이

    for (answer[1] = x = i = 0; s[i]; i++) // s의 모든 0을 제거
    {
        s[i] % 2 ? x++ : answer[1]++;
        // x++, 1의 개수
        // answer[1]++, 제거한 0의 개수
    }

    for (answer[0] = 1; x - 1; x = c, answer[0]++) // 이진 변환
    {
        for (c = 0; x; x /= 2) // 0 제거
        {
            x % 2 ? c++ : answer[1]++;
            // c++, 변환 후 십진수
            // answer[1]++, 제거한 0의 개수에 추가
        }
    }


    return answer;
    // answer[0] = 이진 변환 횟수
    // answer[1] = 제거한 0의 개수
}


int main(void)
{
    char* x = "01110";
    int* result = solution(x);

    printf("%d %d", *result, result[1]);

    return 0;
}