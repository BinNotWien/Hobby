#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

char* solution(const char* s) 
{
    if (strlen(s) % 2 == 0)
    {
        char* answer = (char*)calloc(3, sizeof(char));

        answer[0] = s[strlen(s) / 2 - 1];
        answer[1] = s[strlen(s) / 2];

        return answer;
    }
    else
    {
        char* answer = (char*)calloc(2, sizeof(char));

        answer[0] = s[strlen(s) / 2];

        return answer;
    }
}
 

int main(void)
{
    printf("%s", solution("abcde"));

    return 0;
}