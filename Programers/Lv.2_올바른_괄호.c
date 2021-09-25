#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool solution(const char* s) 
{
    int len = strlen(s);
    int parentheses = 0; // 괄호 카운트

    for (int i = 0; i < len; i++) 
    {
        parentheses += (s[i] == '(' ? 1 : -1);
        // 열린 괄호면 1을 더함
        // 닫히는 괄호면 1을 뺌

        if (parentheses < 0) // len 보다 빨리 끝나면 오류
            return false;
    }

    return parentheses == 0; // 올바른 괄호면 true
}


int main(void)
{
	printf("%d", solution(15));

	return 0;
}