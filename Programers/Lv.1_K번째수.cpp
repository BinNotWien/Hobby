#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array1, vector<vector<int>> commands) 
{
    vector<int> answer;

    // commands�� �����ŭ �ݺ�
    for (int i = 0; i < commands.size(); i++) 
    {
        vector<int> temp;

        // array�� i��° ���� j��° ���� temp�� �ӽ� ����
        for (int j = commands[i][0] - 1; j < commands[i][1]; j++)
        {
            temp.push_back(array1[j]);
        }

        // temp ����
        sort(temp.begin(), temp.end());
        
        // temp�� index��°�� ����
        answer.push_back(temp.at(commands[i][2] - 1));
    }

    return answer;
}

void print(vector<int> array1, vector<vector<int>> commands, vector<int> answer) 
{
    vector<int> t = solution(array1, commands);

    if (t == answer)
        cout << "����" << endl;
    else
        cout << "Ʋ�� " << endl;
}

int main(void) 
{
    print({ 1, 5, 2, 6, 3, 7, 4 }, 
          { {2, 5, 3},{4, 4, 1},{1, 7, 3} }, 
          { 5, 6, 3 });


    return 0;
}