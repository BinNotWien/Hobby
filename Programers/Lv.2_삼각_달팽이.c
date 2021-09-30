#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int* solution(int n)
{
    int* answer = (int*)calloc(n * (n + 1) / 2, sizeof(int));
    // n * (n + 1) / 2 = 가장 큰 수

    int temp[50][50] = { 0, };
    int re = n;
    int col = 0, row = -1; // 0번째 부터 채우기 위함
    int a = 0, b = 0, c = 0, num = 0;

    for (a = 0; a < re; a++)
    {
        b = re - a; // 행 이동
        if (c % 3 == 0) // 왼쪽 행 채움
        {
            while (b-- > 0)
                temp[++row][col] = ++num;
        }
        else if (c % 3 == 1) // 아래 열 채움
        {
            while (b-- > 0)
                temp[row][++col] = ++num;
        }
        else 
        { 
            while (b-- > 0) // 올라가면서 오른쪽 행 채움
                temp[--row][--col] = ++num;
        }
        c++;
    }


    // 값 입력
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            answer[count++] = temp[i][j];
        }
    }

    for (int i = 0; i < count; i++)
    {
        printf("%d ", answer[i]);
    }
    // return answer;
}


int main(void)
{
    solution(4);

    return 0;
}