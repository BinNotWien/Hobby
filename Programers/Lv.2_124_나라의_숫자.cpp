#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;


string solution(int n) 
{
    string answer = "";
    string tmp[3]{ "4", "1", "2" }; // 3Áø¹ý

    while (n)
    {
        answer = tmp[n % 3] + answer; 

        if (!(n % 3))
        {
            n = n / 3 - 1; // ¸ò 1À» »©¼­ 0À» Ç¥Çö
        }
        else
        {
            n = n / 3;
        }
    }

    return answer;
}

int main(void)
{
    printf("%s", solution(3).c_str());

    return 0;
}