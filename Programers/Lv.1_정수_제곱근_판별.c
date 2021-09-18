#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>
#include <math.h>


long long solution(long long n)
{

	// 'sqrt(n)'�� ��ȯ���� double���� �Լ��� 'n'�� �������� ������ش�
	// �� ���� ������ ��츦 '(int)sqrt(n) == sqrt(n)'���ǽ����� �������ش�
	if ((int)sqrt(n) == sqrt(n))
	{
		return (sqrt(n) + 1) * (sqrt(n) + 1);
	}
	else
	{
		return -1;
	}
}

long long solution2(long long n)
{
	long long answer = 0;

	if ((int)sqrt(n) == sqrt(n))
		answer = pow((sqrt(n) + 1), 2);
	else
		answer = -1;

	return answer;
}


int main(void)
{
	printf("%d", solution(144));

    return 0;
}