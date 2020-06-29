#include <iostream>
#include <cmath>

using namespace std;

long long round(long long c, int k) { // c를 k자리에서 반올림, k = 0 일 땐 그대로
	if (k == 0) return c;
	//ex 1850 3
	k = pow(10, k);
	if (c % k >= (k / 2)) {
		return ((c / k) + 1) * k;
	}
	else return (c / k) * k;
}
int main()
{
	long long c;
	int k; // 캔디 가격, 액면가 0의 갯수
	cin >> c >> k;

	cout << round(c, k);

	return 0;
}