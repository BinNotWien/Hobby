#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

long long solution(int n) 
{
    long long answer = 0;
    long long* num = (long long*)malloc(n * sizeof(long long));
    // long long num[n];

    num[0] = 1;
    num[1] = 1;

    for (int i = 2; i <= n; i++) // 피보나치
    {
        num[i] = (num[i - 1] + num[i - 2]) % 1234567;
    }

    answer = num[n];

    return answer;
}

long long solution2(int n)
{
    unsigned long long answer = 0;
    unsigned long long bNum = 0;
    unsigned long long nNum = 1;

    for (int i = 0; i < n; i++) // 피보나치 + 스왑
    {
        answer = (bNum + nNum) % 1234567;
        bNum = nNum;
        nNum = answer;
    }

    return answer % 1234567ULL; // ULL = unsigned Long Long
}

int solution3(int n) // 피보나치 + 삼항 연산자
{
    return n < 2 ? 1 : solution(n - 2) + solution(n - 1);
}


int main(void)
{
    printf("%d", solution3(3));

    return 0;
}