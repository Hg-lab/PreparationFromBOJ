#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int n;
	cin >> n;
	long long int count = 0;
	long long int answer = 0;

	// 몇자리 수
	int temp = n;
	while (temp / 10 >= 1) {
		if (temp / 10 >= 1) {
			temp /= 10;
			count++;
		}
	} // n : count + 1 의 자리 수

	for (int i = 1; i <= count; i++) {
		answer += 9 * i * pow(10, i - 1); // 120 : 1*9*pow(10,0), 2*9*(10,1)개 = 9+180 = 189
	}
	answer += (count + 1)*(n - pow(10,count) + 1); // 3 * (120-100 + 1)개, count = 2; = 

	cout << answer;


}
