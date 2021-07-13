#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int GCD2(int a, int b) {
	if (a < b) {
		int temp = a;
		a = b;
		b = temp;
	}
	if (a % b == 0) return b;
	return GCD2(b, a % b);
}

int GCD3(int a, int b, int c) {
	return GCD2(GCD2(a, b), c);
}

void printCD(int x) {
	for (int i = 1; i <= x;i++) {
		if (x % i == 0) cout << i << '\n';
	}
}

int main()
{
	int n;
	cin >> n;
	int a, b, c;
	if (n == 2) {
		cin >> a >> b;
		printCD(GCD2(a, b));
	}
	if (n == 3) {
		cin >> a >> b >> c;
		printCD(GCD3(a, b, c));
	}
	return 0;
}

