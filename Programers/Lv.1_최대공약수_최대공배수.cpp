#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int m) 
{
    vector<int> answer;

    int a = n, b = m, r;

    while (b != 0) // 유클리드 호제법 - 최대공약수
    {
        r = a % b;
        a = b;
        b = r;
    }

    answer.push_back(a);
    answer.push_back(n * m / a); // 최대공배수

    return answer;
}


int main(void) 
{
    solution(2, 5);


    return 0;
}