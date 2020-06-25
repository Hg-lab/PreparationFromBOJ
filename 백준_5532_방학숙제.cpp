#include <iostream>

using namespace std;

int main() {
	int l, a, b, c, d = 0; // 방학총, 국어, 수학, 국어최대, 수학최대
	cin >> l >> a >> b >> c >> d;
	int count = 0;
	
	while(a > 0 || b > 0) {
		a -= c;
		b -= d;
		count ++;
	} 
	
	cout << l - count;
	
}
