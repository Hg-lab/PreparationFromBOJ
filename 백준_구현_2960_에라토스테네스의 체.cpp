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
	int n, k;
	int x = 0, count = 0;
	cin >> n >> k;
	int a[n+1]; // index 가 n 값까지 가지려면 사이즈를 n+1 까지해야 a[n]이 존재함. 
	for (int i=0; i <= n; i++) { // n=11 일때 a.size() = 12, a[11] = 11 까지 i가 n까지 들어가야함 
		a[i] = i;
	}
	
	for(int i = 2; i <= n; i++) {
		if(primeNumber(i) == true){
		for(int j = i; j <= n; j+=i) {
			if(a[j]==0) continue;
			a[j] = 0;
			count++;
			if(count == k) {x = j;}
			}
		}
	}
	cout << x;
}
