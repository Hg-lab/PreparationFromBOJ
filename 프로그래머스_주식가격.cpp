#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    stack<int> s;
    for(int i = 0; i < prices.size(); i++) {
		s.push(prices[i]);
	}
	while(!s.empty()) {
		for(int j = 0; j < prices.size(); j++) {
			if(s.top >= prices.begin() + j) {
				answer[j] ++;
			}
		}
		s.pop();
	}
		
    return answer;
}

int main() {
//	vector<int> prices;
//	prices = {1, 2, 3, 2, 3};
//	vector<int> answer;
//    stack<int> s;
//    for(int i = 0; i < prices.size(); i++) {
//		s.push(prices[i]);
//	}
//	while(!s.empty()) {
//		for(int j = 0; j < prices.size(); j++) {
//			if(s.top >= prices[j]) {
//				answer[j] ++;
//			}
//		}
//		s.pop();
//	}
//		
//	return 0;
}
