#include <iostream>
#include <string>
#include <vector>

//HELLOTHERE WELL BEFINE
//HELLOTHEREEWELLLBEFINEE

using namespace std;

// ABCDE
// FGHIJ
// KLMNO
// PQRST
// UVWXY
// Z
int main()
{
	vector<string> v;
	string m;
	int n; // testcase 수
	cin >> n;
	for (int i = 1; i <= n;i++) {
		cin >> m;
		v.push_back(m);
	}

	//cout << (int)'A'; // A unicode 65

	for (auto s : v) {
		int cntAlphabet[26] = { 0, };
		bool fake = false;
		for (int i = 0; i < s.length(); i++) {
			cntAlphabet[(int)s[i] - 65]++;
			if (cntAlphabet[(int)s[i] - 65] == 3) { //HELLOTHEREEWELLLBEFINEE
				if (s[i] != s[i + 1]) {
					cout << "FAKE";
					fake = true;
					break;
				}
				cntAlphabet[(int)s[i] - 65] = 0;
				i++;
			}
		}
		if (fake == false) cout << "OK";
		cout << '\n';

	}

	return 0;
}