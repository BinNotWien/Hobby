#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

int answer = 0;

void DFS(vector<int> numbers, int target, int sum, int cnt) // 재귀
{
    if (cnt == numbers.size()) // 마지막까지 순회 후
    {
        if (sum == target) // 타겟을 찾으면
        {
            answer++; // 경우의 수 증가
        }
        return;
    }

    // 최대깊이까지 더하거나 뺀 상태로 계속 탐색
    DFS(numbers, target, sum + numbers[cnt], cnt + 1);
    DFS(numbers, target, sum - numbers[cnt], cnt + 1);
}

int solution(vector<int> numbers, int target)
{
    DFS(numbers, target, 0, 0);

    return answer;
}


int main(void) 
{
    int target = 3;
    vector<int> num = { 1,1,1,1,1 };
    
    cout << solution(num, target) << endl;

    return 0;
}