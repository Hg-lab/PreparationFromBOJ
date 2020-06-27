#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n; cin >> n;
	vector<int> v;
	for (int i = 0;i < n;i++) {
		int x; cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	if (v.size() >= 3) {
		cout << "YES" << '\n';
	}
	else {
		cout << "NO" << '\n';
	}

	return 0;
}