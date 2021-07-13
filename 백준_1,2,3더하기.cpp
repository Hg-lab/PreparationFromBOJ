#include <iostream>
#include <algorithm>
using namespace std;
// 1, 2, 3더해서 n만들수 있는 가지 수 (숫자중복 가능 순서만다르면) 
int n, t;
int dp[11];
int main() {
//입력부 
	cin >> t;
	int n[t] = {0,};
	int answer[t] = {0,};
	for(int k = 0; k < t; k++) {
		cin >> n[k];
		
		dp[1]=1;
		dp[2]=2;
		dp[3]=4;
		
		if(n[k] >= 4){
		for(int i = 4; i <= n[k]; i++) {
			dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
//			if(i == 4) dp[i]+=3;		
//			if(i == 5) dp[i]+=2;
//			if(i == 6) dp[i]+=1;
		}}
		answer[k]=dp[n[k]];
	}
	for(int k=0; k<t; k++){
	cout << answer[k] << '\n';
	}
}
