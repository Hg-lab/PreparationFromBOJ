#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
int main() {
	int t = 0;
	cin >> t; // 캐릭터 수
	int result = 0;
	for (int i = 0; i < t; i++) {
		int hp = 0, mp = 0;
		int pow = 0, def = 0;

		cin >> hp >> mp >> pow >> def;
		int hp2, mp2, pow2, def2;
		cin >> hp2 >> mp2 >> pow2 >> def2;

		hp += hp2;
		mp += mp2;
		pow += pow2;
		def += def2;

		if (hp < 1) hp = 1;
		if (mp < 1) mp = 1;
		if (pow < 0) pow = 0;

		result = 1 * hp + 5 * mp + 2 * pow + 2 * def;
		v.push_back(result);
	}

	for (int i = 0; i < v.size(); i++) cout << v[i] << '\n';
	return 0;
}