#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	string number;
	int k;
    string answer = "";
    int k2 = 0;
    vector<char> temp;
	cin >> number >> k;
    for (int i = 0; i < number.length(); i++)
    {
        temp.push_back(number[i]);
    }
    //int로 바꾸니까 시간초과

    vector<char>::iterator it = temp.begin();

    while (k2 != k)
    {
        if (it != temp.end())
        {
            if (*it < *(it + 1))
            {
                temp.erase(it);
                k2++;
                it = temp.begin();
            }
            else
            {
                it++;
            }
        }
        else //"1010",2 -> 케이스 해결
        {
            temp.erase(it - 1); //이 else문에 들어오는 경우는 k만큼 제거가 안된 경우이므로
            k++;
//			break;
        }
    }

    for (int i = 0; i < temp.size(); i++)
    {
        answer += temp[i];
    }

    cout<< answer << '\n';
}
