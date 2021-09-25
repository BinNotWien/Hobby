#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

long long solution(int w, int h) 
{
	long long answer = 0;
	long long block = 0;

	// �밢������ �߸� ���, ������ ���簢���� ������ ������ �����ﰢ���� �ΰ� ���������
	// �̸� ���� * ���� ��ǥ(w*i / h)�� ���� 'block'�� ���Ͽ�
	// �����ﰢ���� ���� ���簢�� ���� ���ϰ� 2�踦 ���ָ鼭 'answer'�� ���ϴ� ����
	for (int i = 0; i < h; i++) 
	{
		block = (long long)w * i / h;

		answer += (2 * block);
	}

	return answer;
}

long long gcd(int a, int b) // ��Ŭ���� ȣ���� ���
{
	if (a == 0) 
		return b;

	return gcd(b % a, a);
}
long long solution2(int w, int h)
{
	return (long long)w * (long long)h - w - h + gcd(w, h);
}

int main(void)
{
	printf("%lld", solution(15, 12));

	return 0;
}