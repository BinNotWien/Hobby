#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>

int solution(int num)
{

	// �Ű����� int�� 'num'�� ���, 626331�� ��� �� �����÷ο찡 �߻��Ͽ�
	// long long������ �ڷ����� �ٲ��ش�
	long long n = num;

	// �ݶ��� ������ 500�� �ݺ��ϸ鼭 1�� �Ǹ� �ݺ�Ƚ���� �������ִ� ����
	for (int i = 0; i < 500; i++)
	{
		if (n == 1)
		{
			return i;
		}
		else if (n % 2 == 0)
		{
			n /= 2;
		}
		else
		{
			n = (n * 3) + 1;
		}
	}

	// answer = (answer % 2 == 0) ? (answer / 2) : (3 * answer + 1);
	// ��ȯ ����

	return -1;
}


int main(void)
{
    printf("%d", solution(100));

    return 0;
}