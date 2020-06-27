#include <iostream>
#include <vector>

using namespace std;
int GCD(int a, int b) {
	if (a < b) {
		int temp = a;
		a = b;
		b = temp;
	}
	if (a % b == 0) return b;
	return GCD(b, a % b);
}
int main()
{
	int n, m;
	cin >> n >> m;

	cout << m - GCD(n, m);
	return 0;
}