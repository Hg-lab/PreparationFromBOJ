#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack> 
#include <iostream>
using namespace std;

vector<int> solution(vector<int> heights) {
    vector<int> answer;
    stack<int> s;
	s.push(heights.back());
	    
    for(int i = heigths.size()-1; i >=0; i--) {
		for(int j = i-1; j >=0;j--) {
			if(heights[i] < heights[j]) {
			answer.push_back(j+1);
			break;
			}
		}
		answer.push_back(0);
	}
    
    
    return answer;
}
