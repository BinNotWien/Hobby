#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
#include <string.h>

int compare(const void* x, const void* y)
{
    return  -strcmp((char*)x, (char*)y);
    // ����� ��ȯ�� ��������
}

char* solution(const char* s)
{
    char* answer = (char*)malloc(strlen(s) * sizeof(char));
    // char temp[strlen(s)];
    char temp[10000];

    strcpy(temp, s);
    // ����Ʈ
    qsort(temp, strlen(s), sizeof(char), compare);
    strcpy(answer, temp);


    return answer;
}


int main(void)
{
    printf("%s", solution("Zbcdefg"));

    return 0;
}