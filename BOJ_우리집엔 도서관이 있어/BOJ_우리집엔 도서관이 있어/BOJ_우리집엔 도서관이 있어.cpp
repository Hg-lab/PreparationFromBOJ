#include <iostream>
#include <vector>
using namespace std;

int n;
int temp;
vector<int> v;

int main()
{
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> temp;
		v.push_back(temp);
	}
	int cur = n;

	for (int i = n - 1; i >= 0; i--) {
		if (v[i] == cur) cur--;
	}

	cout << cur;

}