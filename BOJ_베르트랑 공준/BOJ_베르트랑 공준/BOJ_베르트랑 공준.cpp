#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPrimeNum(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int werther(int n){
	int count = 0;
	for (int i = n + 1; i <= 2 * n; i++) {
		if (isPrimeNum(i) == true) count++;
	}
	return count;
}

int main()
{
	int n = 1;
	vector<int> v;
	while (n != 0) {
		cin >> n;
		if (n == 0) break;
		v.push_back(werther(n));
	}
	for (auto i : v) {
		cout << i << '\n';
	}

	return 0;
}