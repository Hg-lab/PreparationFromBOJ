#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;
bool primeNumber (int n){
	for(int i = 2; i <= sqrt(n); i++) {
		if(n%i == 0) return false;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	
	cout << primeNumber(n);
}
