#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
	string a; // 가로 문자열
	string b; // 세로 문자열
	cin >> a >> b;
	int idxA = 0, idxB = 0;
	for (int i = 0; i < a.length();i++) {
		bool found = false;
		for (int j = 0;j < b.length();j++) {
			if (a[i] == b[j]) {
				idxA = i;
				idxB = j;
				found = true;
				break;
			}
		}
		if (found == true) break;
	}

	for (int j = 0; j < b.length(); j++) {
		for (int i = 0; i < a.length(); i++) {
			if (i == idxA) {
				cout << b[j];
			}
			else if (j == idxB) {
				cout << a[i];
			}
			else cout << '.';

		}
		cout << '\n';
	}

	return 0;


}
