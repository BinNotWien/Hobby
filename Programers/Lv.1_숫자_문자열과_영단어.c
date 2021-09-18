#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>


char* table[] = {  // ���� ���̺�
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
        if ('0' <= ch && ch <= '9') // ����
        {
            ret *= 10;  // �ڸ��� �ø�
            ret += ch - '0'; // ���� 0�� ���� ���ڰ� ��
        }
        else
        {
            for (i = 0; i < 10; ++i) // ����
            {
                // ���̺��� ���� ���� �� ��
                // ��ġ�ϸ� �ڸ����� �ø� �� �� �߰� + �극��ũ
                if (strncmp(table[i], s, strlen(table[i])) == 0) 
                {
                    ret *= 10;
                    ret += i;
                    break;
                }
            }
        }

        ++s; // ���� '����'
    }

    return ret;
}


int main(void)
{
    printf("%d", solution("one23fourfive"));

    return 0;
}