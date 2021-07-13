#include <iostream>
#include <vector>
#include <queue>
using namespace std;
// 숫자 n의 k번째 자릿수 구하는 함수
int fun(int n, int k) {
	int answer = 0;
	for(int i = 1; i <= k-1; i++) {
		n /= 10;
	}
	answer = n % 10;
	
	return answer;
} 

int main() {
	int n, k;
	cin >> n >> k;
	
	cout << fun(n,k);
}
