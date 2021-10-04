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

    answer += "김서방은 ";

    for (int i = 0; i < seoul.size(); i++)
    {
        if (seoul[i] == "Kim") // "Kim"을 찾으면
        {
            answer += to_string(i); // to_string(), 숫자 타입 -> 문자열
        }
    }

    answer += "에 있다";

    return answer;
}


int main(void) 
{
    vector<string> arr = { "Jane", "Kim" };

    cout << solution(arr) << endl;

    return 0;
}