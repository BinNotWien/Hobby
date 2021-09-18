#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>


// absolutes_len은 배열 absolutes의 길이입니다.
// signs_len은 배열 signs의 길이입니다.
int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len)
{
    int answer = 0;

	for (int i = 0; i < absolutes_len; i++)
	{
		if (!signs[i])
		{
			absolutes[i] *= -1;
		}
		answer += absolutes[i];
	}

    return answer;
}

int main(void)
{
	int arr[3] = { 1, 2, 3 };
	bool sings[3] = { false, false, true };

	int sum = 0;

	sum = solution(arr, 3, sings, 3);

	printf("%d", sum);

    return 0;
}