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
    priority_queue<int> pq; // 우선순위 큐

    for (const auto& p : priorities)
    {
        q.push({ p,index++ }); // 우선순위 - index
        pq.push(p); // 우선순위
    }

    int order = 1;
    while (!q.empty())
    {
        pair<int, int> cur = q.front();

        if (pq.top() <= cur.first) // 우선순위가 높거나 같으면
        {
            if (cur.second == location) // 찾던 index면 바로 리턴
            {
                return order;
            }
            // 인쇄한 걸로 치고 둘다 팝, 이후 순번 증가
            q.pop();
            pq.pop();
            order++;
        }
        else // 우선순위가 낮아 프린터를 못하니
        {
            q.push(cur); // 앞의 원소를
            q.pop(); // 뒤로 보냄(중복 제거)
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