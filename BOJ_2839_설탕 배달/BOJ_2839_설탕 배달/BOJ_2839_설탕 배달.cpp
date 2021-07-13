#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int count = 0;

	if (n % 5 == 0) {
		count = n / 5;
		cout << count;
		return 0;
	}

	bool found = false;

	for (int i = 0; i <= n; i += 3) {
		for (int j = 0; j <= n; j += 5) {
			if (n == i + j) {
				count = i / 3 + j / 5;
				cout << count;
				found = true;
				break;
			}
		}
		if (found == true) {
			break;
		}
	}

	if (n % 3 == 0 && found == false) {
		count = n / 3;
	}
	if (count == 0) cout << -1;
}
