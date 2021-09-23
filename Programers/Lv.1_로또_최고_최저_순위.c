#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int arr1[46] = { 0, }; // lottos �ȿ� ���� ������ ��
int arr2[7] = { 6,6,5,4,3,2,1 }; // �ζ� ����

int solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len)
{
	int answer[2] = { 0, };
	int min = 0, max = 0;

	for (int i = 0; i < lottos_len; i++)
	{
		arr1[lottos[i]]++; // lottos�� ���ؼ� ��ġ�ϴ� ���ڰ� �ִٸ� +1
	}

	for (int i = 0; i < win_nums_len; i++)
	{
		if (arr1[win_nums[i]]) // arr1 �ȿ� win_nums[i] ��° ���� �ִٸ�
			min++; // ���� ���� ����
	}

	max = min + arr1[0];
	// 0�� ����(�´´ٰ� ħ) + �ּ� ���� ��� �� = �ְ� ����

	answer[0] = arr2[max]; // �ְ� ����
	answer[1] = arr2[min]; // ���� ����

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