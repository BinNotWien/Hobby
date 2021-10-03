#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <map>

using namespace std;

int solution(vector<int> citations) 
{
    int answer = 0;
    sort(citations.begin(), citations.end(), greater<int>());
    
    // 제일 큰 값이 0이면 H-index는 0
    if (!citations[0])
    {
        return 0;
    }

    for (int i = 0; i < citations.size(); i++) 
    {
        if (citations[i] > i)
        {
            answer++; // h값 안이라면
        }
        else
        {
            break; // 최대값을 벗어났다면
        }
    }

    return answer;
}


int main(void) 
{
    printf("%d\n", solution({ 3, 0, 6, 1, 5 }));

    printf("%d\n", solution({ 1, 7, 0, 1, 6, 4 }));

    printf("%d", solution({ 2, 7, 5 }));

    return 0;
}