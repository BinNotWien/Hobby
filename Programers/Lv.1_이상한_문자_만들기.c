#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>


char* solution(const char* s) 
{

    char* answer = (char*)malloc(1 * strlen(s) + 1); 
    // 짝수번째 +1 은 NULL 문자 까지 

    strcpy(answer, s);

    bool isOdd = true;

    for (int i = 0; i < strlen(s); i++) // 길이만큼
    {
        if (answer[i] == ' ')  // 공백이면
        {
            isOdd = true;
            continue;  // 반복문 유지
        }
        if (isOdd)
            answer[i] = toupper(answer[i]); // 소문자 -> 대문자
        else
            answer[i] = tolower(answer[i]); // 대문자 -> 소문자

        // answer[i] = isOdd ? toupper(answer[i]) : tolower(answer[i]);

        isOdd = !isOdd;
    }

    return answer;
}


int main(void)
{
    printf("%s", solution("try hello world"));

    return 0;
}