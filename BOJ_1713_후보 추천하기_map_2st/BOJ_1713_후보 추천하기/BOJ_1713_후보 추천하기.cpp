#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool compare(pair<int, pair<int, int> > p1, pair<int, pair<int, int> > p2) {
	if (p1.second.second == p2.second.second) return p1.first < p2.first;
	return p1.second.second > p2.second.second;

}
int main()
{
	int n, total; // 사진틀 개수, 총 추천받은 학생 수
	cin >> n;
	cin >> total;
	vector<pair<int, pair<int, int>> > v; // pair container
	map<int, int> m; // 순번, 학생번호
	for (int i = 0; i < total;i++) {
		int stu; // 추천받는 학생 번호
		cin >> stu;
		m[stu]++;
	}
	int k = 10;
// !!! map은 key 값 순으로 이미 정렬 되어 있다.
// map : v< pair<key, value> > map
// k 로 순서를 메기려고 했으나, map을 iterator로 돌리면 key 순서대로 돌아간다.
// v[i].first는 위에서 정해주어야한다.
	map<int, int>::iterator it;
	for (it = m.begin(); it != m.end(); it++) {
		v.push_back({ k, {it->first, it->second } });
		k++;
	}
	v.push_back({ 111, {4, 5 } });

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size() ;i++) {
		cout <<"index : " << v[i].first << ", "<<v[i].second.first << ", " << v[i].second.second  << '\n';
		//cout <<v[i].second.first << '\n';

	}

	return 0;
}