#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    vector<int> answer;
    int day;
    int max_day = 0;


    for (int i = 0; i < progresses.size(); ++i)
    {
        day = (99 - progresses[i]) / speeds[i] + 1;
        // ���� �ϼ� / ���� �۾��� + 1

        // vector�� ����ְų� or ���� �Ⱓ���� �� ���
        if (answer.empty() || max_day < day)
        {
            answer.push_back(1);
            max_day = day;
        }
        else
        {
            answer.back()++; // ���� ��� ����
        }
    }

    return answer;
}


int main(void) 
{
    vector<int> p = { 95, 90, 99, 99, 80, 99 };
    vector<int> s = { 1, 1, 1, 1, 1, 1 };

    solution(p, s);

    return 0;
}