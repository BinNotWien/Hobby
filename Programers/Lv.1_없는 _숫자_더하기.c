#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
#include <string.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) 
{
    int answer = 45;
	int sum = 0;

	for (int i = 0; i < numbers_len; i++)
	{
		sum += numbers[i];
	}

	answer -= sum;

    return answer;
}



int main(void)
{
	int arr[] = { 5, 8,4,0,6,7,9 };

	printf("%d", solution(arr, 7));

	return 0;
}