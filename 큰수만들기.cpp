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
    //int�� �ٲٴϱ� �ð��ʰ�

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
        else //"1010",2 -> ���̽� �ذ�
        {
            temp.erase(it - 1); //�� else���� ������ ���� k��ŭ ���Ű� �ȵ� ����̹Ƿ�
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
