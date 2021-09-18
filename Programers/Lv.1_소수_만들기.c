#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <math.h>


int isitdecimal(int num)
{
    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

// nums_len�� �迭 nums�� �����Դϴ�.
int solution(int nums[], size_t nums_len) 
{
    int answer = 0;
    int temp;
    for (int i = 0; i < nums_len - 2; i++)
    {
        for (int j = i + 1; j < nums_len - 1; j++)
        {
            for (int k = j + 1; k < nums_len; k++)
            {
                temp = nums[i] + nums[j] + nums[k];

                if (isitdecimal(temp) == 1)
                {
                    answer++;
                }
            }
        }
    }

    return answer;
}



int main(void)
{
    int nums[5] = { 1, 2, 7, 6, 4 };
    int decimal = 0;

    decimal = solution(nums, sizeof(nums) / sizeof(int));
    

    printf("�Ҽ� ���� = %d", decimal);

    return 0;
}