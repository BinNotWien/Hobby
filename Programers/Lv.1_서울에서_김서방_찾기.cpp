#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

string solution(vector<string> seoul)
{
    string answer = "";

    answer += "�輭���� ";

    for (int i = 0; i < seoul.size(); i++)
    {
        if (seoul[i] == "Kim") // "Kim"�� ã����
        {
            answer += to_string(i); // to_string(), ���� Ÿ�� -> ���ڿ�
        }
    }

    answer += "�� �ִ�";

    return answer;
}


int main(void) 
{
    vector<string> arr = { "Jane", "Kim" };

    cout << solution(arr) << endl;

    return 0;
}