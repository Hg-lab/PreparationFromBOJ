#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> answer;

bool checked[31];
int main()
{
	vector<int> v;
	v.push_back(0);
	for (int i = 0; i < 28; i++) {
		int temp;
		cin >> temp;
		checked[temp] = 1;
	}

	for (int i = 1;i <= 30;i++) {
		if (!checked[i])
			cout << i << '\n';
	}
}
