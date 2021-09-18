#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>


char* table[] = {  // 매핑 테이블
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine"
};

int solution(const char* s)
{
    int ret = 0;
    char ch = 0;
    int i = 0;

    while ((ch = *s))
    {
        if ('0' <= ch && ch <= '9') // 숫자
        {
            ret *= 10;  // 자릿수 늘림
            ret += ch - '0'; // 문자 0을 뺴면 숫자가 들어감
        }
        else
        {
            for (i = 0; i < 10; ++i) // 문자
            {
                // 테이블에서 값을 매핑 후 비교
                // 일치하면 자릿수를 늘린 후 값 추가 + 브레이크
                if (strncmp(table[i], s, strlen(table[i])) == 0) 
                {
                    ret *= 10;
                    ret += i;
                    break;
                }
            }
        }

        ++s; // 다음 '문자'
    }

    return ret;
}


int main(void)
{
    printf("%d", solution("one23fourfive"));

    return 0;
}