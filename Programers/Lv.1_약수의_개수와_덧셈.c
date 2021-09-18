#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>

int solution(int left, int right)
{
    int answer = 0;
    int cnt; 	

    for (int i = left; i <= right; i++) 
    {    
        cnt = 0;
        for (int j = 1; j <= i; j++) 
        {
            if (i % j == 0)
            {
                cnt++;
            }
        }

        if (cnt % 2 == 0)
        {
            answer += i;
        }
        else
        {
            answer -= i;
        }

        // answer += (cnt & 1) ? -i : i;  삼항연산자 활용
    }

    return answer;
}


int main(void)
{
    printf("%d", solution(13, 17));



	return 0;
}