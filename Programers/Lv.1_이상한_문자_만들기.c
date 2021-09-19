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
    // ¦����° +1 �� NULL ���� ���� 

    strcpy(answer, s);

    bool isOdd = true;

    for (int i = 0; i < strlen(s); i++) // ���̸�ŭ
    {
        if (answer[i] == ' ')  // �����̸�
        {
            isOdd = true;
            continue;  // �ݺ��� ����
        }
        if (isOdd)
            answer[i] = toupper(answer[i]); // �ҹ��� -> �빮��
        else
            answer[i] = tolower(answer[i]); // �빮�� -> �ҹ���

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