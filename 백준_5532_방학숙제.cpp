#include <iostream>

using namespace std;

int main() {
	int l, a, b, c, d = 0; // ������, ����, ����, �����ִ�, �����ִ�
	cin >> l >> a >> b >> c >> d;
	int count = 0;
	
	while(a > 0 || b > 0) {
		a -= c;
		b -= d;
		count ++;
	} 
	
	cout << l - count;
	
}
