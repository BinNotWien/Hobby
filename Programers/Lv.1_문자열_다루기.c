#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>


bool solution(const char* s)
{
    if (strlen(s) != 4 && strlen(s) != 6)
        return false;

    for (int i = 0; i < strlen(s); i++)
    {
        if (!(s[i] >= '0' && s[i] <= '9'))
            return false;
    }

    return true;
}

int main(void)
{
	

    return 0;
}