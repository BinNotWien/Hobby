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
        // 남은 일수 / 일일 작업량 + 1

        // vector가 비어있거나 or 최장 기간보다 더 길면
        if (answer.empty() || max_day < day)
        {
            answer.push_back(1);
            max_day = day;
        }
        else
        {
            answer.back()++; // 배포 기능 증가
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