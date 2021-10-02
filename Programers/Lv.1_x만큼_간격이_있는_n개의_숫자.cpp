#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;


vector<long long> solution(int x, int n) 
{
    vector<long long> answer;

    for (int i = 1; i < n + 1; i++) 
    {
        answer.push_back(x * i);
        // answer[i] = answer[i - 1] + x;
    }

    return answer;
}

int main(void)
{
    vector<long long> tmp = solution(2, 5);

    for (int i = 0; i < tmp.size(); i++)
    {
        cout << tmp[i] << " ";
    }

    return 0;
}