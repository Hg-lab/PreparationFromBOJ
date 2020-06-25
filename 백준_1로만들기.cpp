#include <iostream>
#include <algorithm>
using namespace std;
// 3나누거나 2나누거나 1빼서 n을 1로 만드는 최소가지수 
int n;
int dp[1000001];
int main() {
//입력부 
	cin >> n;
	
	dp[1]=0;
	dp[2]=1;
	dp[3]=1;
	dp[4]=2;
	dp[5]=3;
	if(n >= 6){
	for(int i = 6; i <= n; i++) {
		if(i % 3 != 0 && i % 2 != 0) {
			dp[i] = dp[i - 1] + 1;
		}
		if(i % 3 == 0) {
			dp[i] = min(dp[i-1], dp[i / 3]) + 1;
		}
		else if(i % 2 == 0) {
			dp[i] = min(dp[i - 1], dp[i / 2]) + 1;
		}
	}}
	cout << dp[n];
}
