#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) 
{
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());

    for (int i = 0; i < participant.size(); i++) 
    {
        if (participant[i] != completion[i])
        {
            return participant[i];
        }
    }
}


int main(void) 
{
    vector<string> p = { "leo", "kiki", "eden" };
    vector<string> c = { "eden", "kiki" };

    solution(p, c);

    return 0;
}