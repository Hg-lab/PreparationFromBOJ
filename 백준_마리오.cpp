#include <iostream>
#include <algorithm>
#include <vector>

//절대값 함수 
int absolNum(int a) {
	if(a < 0) {
		return (-1) * (a);
	} else
	return a;
}

using namespace std;
int main() {
	int input = 0;
	int sum = 0;
	vector<int> vSum;
	 // 들어오는대로 축적 
	for(int i = 0; i < 10; i++) {
		cin >> input;
		sum += input; 
		vSum.push_back(sum);
	}
//		for(int i = 0; i < 10; i++) {
//	cout << vSum[i] << ' ';
//	} 
	
	int diff = 99999;
	int answer_index = 0;
	for(int i = 0; i < 10; i++) {
		if(absolNum(vSum[i] - 100) <= diff) {
			diff = absolNum(vSum[i] - 100);
			answer_index = i;
		}
	}
	
	cout << vSum[answer_index];
	
}
