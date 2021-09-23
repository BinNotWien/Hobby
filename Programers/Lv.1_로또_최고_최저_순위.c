#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int arr1[46] = { 0, }; // lottos 안에 숫자 개수를 셈
int arr2[7] = { 6,6,5,4,3,2,1 }; // 로또 순위

int solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len)
{
	int answer[2] = { 0, };
	int min = 0, max = 0;

	for (int i = 0; i < lottos_len; i++)
	{
		arr1[lottos[i]]++; // lottos와 비교해서 일치하는 숫자가 있다면 +1
	}

	for (int i = 0; i < win_nums_len; i++)
	{
		if (arr1[win_nums[i]]) // arr1 안에 win_nums[i] 번째 값이 있다면
			min++; // 최저 순위 증가
	}

	max = min + arr1[0];
	// 0의 개수(맞는다고 침) + 최소 보장 등수 값 = 최고 순위

	answer[0] = arr2[max]; // 최고 순위
	answer[1] = arr2[min]; // 최저 순위

	return answer;
}


void main()
{
	int lottos[6] = { 44, 1, 0, 0, 31, 25 };
	int win_nums[6] = { 31, 10, 45, 1, 6, 19 };

	int *resort;
	resort = solution(lottos, 6, win_nums, 6);

	printf("%d %d", resort[0], resort[1]);

	return 0;
}