#include <iostream>

using namespace std;
int main()
{
	int e; // 가지고 있는 수
	int f; // 발견한 수
	int c; // 필요한 수
	cin >> e >> f >> c;

	int sum = e + f; // 가진 총 갯수
	int count = 0; // 답
	int rest = 0;
	count = sum / c;

	while (sum >= c && sum != 0) {
		rest = sum % c;
		sum /= c;
		sum += rest; // sum/=c+rest 는 sum /= (c+rest)와 같다
		count += (sum / c);
	}
	cout << count;

}