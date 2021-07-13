#include <iostream>
#include <string>
#include <vector>
//광고비용 계산

using namespace std;

string cal(int r, int e, int c) {
	if (e - c > r) { // advertise
		return "advertise";
	}
	if (e - c < r) { // do not advertise
		return "do not advertise";
	}
	if (e - c == r) { // does not matter
		return "does not matter";
	}
}

int main()
{
	int n; // 횟수
	
	cin >> n;
	
	int r; // 광고하지 않을 때 수익
	int e; // 광고 후 수익
	int c; // 광고 비용
	vector<string> v;

	for (int i = 0; i < n;i++) {
		cin >> r >> e >> c;
		v.push_back(cal(r, e, c));
	}

	for (auto i : v) {
		cout << i <<'\n';
	}

	return 0;
}