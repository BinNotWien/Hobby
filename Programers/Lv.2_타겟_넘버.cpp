#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

int answer = 0;

void DFS(vector<int> numbers, int target, int sum, int cnt) // ���
{
    if (cnt == numbers.size()) // ���������� ��ȸ ��
    {
        if (sum == target) // Ÿ���� ã����
        {
            answer++; // ����� �� ����
        }
        return;
    }

    // �ִ���̱��� ���ϰų� �� ���·� ��� Ž��
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