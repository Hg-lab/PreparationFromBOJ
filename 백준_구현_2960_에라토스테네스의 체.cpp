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
	int a[n+1]; // index �� n ������ �������� ����� n+1 �����ؾ� a[n]�� ������. 
	for (int i=0; i <= n; i++) { // n=11 �϶� a.size() = 12, a[11] = 11 ���� i�� n���� ������ 
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
