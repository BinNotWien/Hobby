#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>


char* solution(const char* phone_number) {
    
    char* answer = (char*)malloc(1);

    strcpy(answer, phone_number);

    for (int i = 0; i < strlen(phone_number) - 4; i++) {
        answer[i] = '*';
    }

    return answer;
}



int main(void)
{
    printf("%s", solution("027778888"));


    return 0;
}