#include <string>
#include <vector>
#include <iostream>

using namespace std;
int dp[21];
int num(int x) {
	if(x==1) return 1;
	if(x==2) return 3;
	if(dp[x] != 0) return dp[x];
	return dp[x] = num(x-1)*2 + 1;
}

vector<int> a[21];

int main() {
	int n=2;
    vector<int> answer;
 // a[i] n = i¿œ∂ß ¥‰ 
	for(int i = 2; i <= n; i++){
	a[1] = {0};
	a[2] = {0, 0, 1};
		for(int j = 0; j <= num(n); j+=3) {
			a[i-1].insert(a[i-1].begin()+j, 0);
		}
		
		for(int j = 3; j <= num(n); j+=4){
			a[i-1].insert(a[i-1].begin()+j, 1);
		}
		a[i] = a[i-1];
		answer = a[i];
	}
	
	cout << num(n) << '\n';
	for(int i = 0; i < num(2); i++){
		cout << a[n][i] << ' ';
	}
    return 0;
}
