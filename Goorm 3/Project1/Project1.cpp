#include <iostream>
#include <vector>
using namespace std;
int main() {

	int t = 0; // 입력횟수
	unsigned int n = 0; // 시즌한정
	unsigned int m = 0;
	vector<int> v;
	cin >> t;

	for (int i = 0; i < t; i++) {

		cin >> n >> m;
		unsigned int sum = n + m;
		int count = 0;

		if (n < 5 || sum < 12) v.push_back(0);
		else {
			while (n >= 5 && sum >= 12) {
				n -= 5;
				sum -= 12;
				count++;
			}
			v.push_back(count);
		}
	}

	for (auto i : v) {
		cout << i << "\n";
	}

	return 0;
}