#include <iostream>
#include <string>

using namespace std;

int main () {
	int n;
	bool cute;
	int count = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> cute ;
		if(cute) count++;
	}
	if(count >= n - count) {
		cout << "Junhee is cute!" <<'\n';
	} else {
		cout << "Junhee is not cute!" << '\n';
	}
} 
