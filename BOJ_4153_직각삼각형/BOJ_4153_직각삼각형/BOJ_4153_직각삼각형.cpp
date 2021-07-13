#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

bool rightTri(int a, int b, int c) {
	if (a > b && a > c) { // a가 가장 큰 경우
		if (pow(a, 2) == pow(b, 2) + pow(c, 2)) return true;
	}
	if (b > a&& b > c) { // b가 가장 큰 경우
		if (pow(b, 2) == pow(a, 2) + pow(c, 2)) return true;
	}
	if (c > b&& c > a) { // b가 가장 큰 경우
		if (pow(c, 2) == pow(b, 2) + pow(a, 2)) return true;
	}

	return false;
}

int main()
{
	bool stop = false; // 여러 개 테스트 케이스, 0 나오면 멈춤
	vector<string> v; //출력 값 저장

	while (!stop) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0 || b == 0 || c == 0) {
			stop = true;
			break;
		}
		
		if (rightTri(a, b, c) == true) {
			v.push_back("right");
		}
		else v.push_back("wrong");
	}
	for (auto i : v) {
		cout << i << '\n';
	}
}
