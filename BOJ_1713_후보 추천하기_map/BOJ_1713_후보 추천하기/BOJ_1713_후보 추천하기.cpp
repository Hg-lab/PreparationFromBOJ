#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2) {
	return p1.second > p2.second;
}

int main()
{
	int n, t;
	cin >> n; // 사진의 갯수
	cin >> t; // 전체 학생 수
	map<int, int> m;
	vector<pair<int, int> > v;
	for (int i = 0; i < t; i++) {
		int index;
		cin >> index;
		m[index]++;
	}

	for (auto& p : m) {
		v.push_back({ p.first, p.second });
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++) {
		cout << v[i].first << '\n';
	}
	
	return 0;
}