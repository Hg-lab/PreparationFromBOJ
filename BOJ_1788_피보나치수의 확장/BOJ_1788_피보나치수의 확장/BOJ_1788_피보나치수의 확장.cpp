#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

long long int dp[1000001];

int main() {
	int n;
	cin >> n;
	dp[0] = 0;
	dp[1] = 1;
	int tempN = n;
	if (n < 0) tempN = -n;
	for (int i = 2; i <= tempN; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]);
	}
	if (n < 0) {
		if ((-n) % 2 == 0) {
			cout << -1 << '\n';
			cout << dp[-n] % 1000000000;
		}
		else {
			cout << 1 << '\n';
			cout << dp[-n] % 1000000000;
		}
	}
	else if (n == 0) cout << 0 << '\n' << 0;
	else {
		cout << 1 << '\n';
		cout << dp[n] % 1000000000;
	}

	return 0;

}
