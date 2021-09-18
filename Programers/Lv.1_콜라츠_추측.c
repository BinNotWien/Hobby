#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>

int solution(int num)
{

	// 매개변수 int형 'num'의 경우, 626331을 계산 시 오버플로우가 발생하여
	// long long형으로 자료형을 바꿔준다
	long long n = num;

	// 콜라츠 추측을 500번 반복하면서 1이 되면 반복횟수를 리턴해주는 동작
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
	// 변환 가능

	return -1;
}


int main(void)
{
    printf("%d", solution(100));

    return 0;
}