#include <string>
#include <vector>
#include <iostream>

using namespace std;

// ÁÙ°¹¼ö 
int dp[21];
int num(int x) {
	if(x==1) return 1;
	if(x==2) return 3;
	if(dp[x] != 0) return dp[x];
	return dp[x] = num(x-1)*2 + 1;
}

int main() {
	int x;
	cin >> x;
	cout << num(x);
}
