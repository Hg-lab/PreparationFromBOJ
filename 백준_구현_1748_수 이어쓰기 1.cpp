#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

long long int pow(long long int a, long long int b) {
	if(b == 0) return 1;
	for(int i = 1; i < b; i++) {
		a *= a;
	}
	return a;
}
int main(){
	long long int n, x, answer, k = 0;
	cin >> n;
	x = n;
	while(x != 0) {
		x /= 10;
		k++;
	}
	k -= 1;
	
	answer = n - pow(10,k);

	answer = (answer+1)*(k+1);
		
	for(long long int i = 1; i <= k; i++) {
		answer += i * 9 * pow(10,i-1);

	}
	cout << answer;
}
