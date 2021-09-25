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
    int parentheses = 0; // ��ȣ ī��Ʈ

    for (int i = 0; i < len; i++) 
    {
        parentheses += (s[i] == '(' ? 1 : -1);
        // ���� ��ȣ�� 1�� ����
        // ������ ��ȣ�� 1�� ��

        if (parentheses < 0) // len ���� ���� ������ ����
            return false;
    }

    return parentheses == 0; // �ùٸ� ��ȣ�� true
}


int main(void)
{
	printf("%d", solution(15));

	return 0;
}