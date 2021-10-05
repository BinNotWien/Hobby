#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location)
{
    int answer = 0;
    int index = 0;
    queue<pair<int, int>> q;
    priority_queue<int> pq; // �켱���� ť

    for (const auto& p : priorities)
    {
        q.push({ p,index++ }); // �켱���� - index
        pq.push(p); // �켱����
    }

    int order = 1;
    while (!q.empty())
    {
        pair<int, int> cur = q.front();

        if (pq.top() <= cur.first) // �켱������ ���ų� ������
        {
            if (cur.second == location) // ã�� index�� �ٷ� ����
            {
                return order;
            }
            // �μ��� �ɷ� ġ�� �Ѵ� ��, ���� ���� ����
            q.pop();
            pq.pop();
            order++;
        }
        else // �켱������ ���� �����͸� ���ϴ�
        {
            q.push(cur); // ���� ���Ҹ�
            q.pop(); // �ڷ� ����(�ߺ� ����)
        }
    }
}


int main(void)
{
    int target = 2;
    vector<int> num = { 2, 1, 3, 2 };

    cout << solution(num, target) << endl;

    return 0;
}