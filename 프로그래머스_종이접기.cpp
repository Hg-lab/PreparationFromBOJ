#include <string>
#include <vector>
#include <iostream>

using namespace std;

// 줄갯수 
int dp[21];
int num(int x) {
	if(x==1) return 1;
	if(x==2) return 3;
	if(dp[x] != 0) return dp[x];
	return dp[x] = num(x-1)*2 + 1;
}

vector<int> a[21];

vector<int> solution(int n) {
    vector<int> answer;
	a[1] = {0};
	a[2] = {0, 0, 1}; // a[i] n = i일때 답 
	for(int i = 2; i <= n; i++){
		
		for(int j = 1; j <= num(n); j+=4) {
//			a[i-1].resize(num(i));
			a[i-1].insert(a[i-1].begin()+j, 1, 0);
		}
		
		for(int j = 3; j <= num(n); j+=4){
			a[i-1].insert(a[i-1].begin()+j, 1, 1);
		}
		a[i] = a[i-1];
		answer = a[i];
	}
	
	//    for( int i = 1; i < answer.size(); i++){
	//		if(!a[i].empty()) answer = a[i];
	//		a[i].reserve(num(n));
	//    	a[i-1].insert(a[i-1].begin()+4*i+1, 0);
	// 		a[i-1].insert(a[i-1].begin()+4*i+4, 1);
	//		a[i] = answer;
	//	}

    return answer;
}

int main() {
}
