#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>
#include <math.h>


long long solution(int a, int b)
{
	long long answer = 0;

	if (a < b)
	{
		for (int i = a; i <= b; i++)
		{
			answer += i;
		}
	}
	else 
	{
		for (int i = b; i <= a; i++) 
		{
			answer += i;
		}
	}
	return answer;
}

long long solution2(int a, int b) 
{
	long long answer = 0;

	if (a > b) // a가 크면 강제로 b로 옮김.
	{
		int temp = b;
		b = a;
		a = temp;
	}

	for (int i = a; i <= b; i++) 
	{
		answer += i;
	}
	return answer;
}

long long solution3(int a, int b)
{
	if (a == b) return a;

	//sum of the smallest and the biggest
	//multiply it by the number of numbers
	//between a and be divided by 2.
	int sum = a + b, num = b - a + 1;

	if (a > b) //if a is greater, replace num.
		num = a - b + 1;

	return (long long)sum * num / 2; //cast the number type 
}



int main(void)
{
    printf("%lld", solution(3, 5));


    return 0;
}