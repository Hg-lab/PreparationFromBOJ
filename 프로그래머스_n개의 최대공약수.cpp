#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <iostream>

using namespace std;

int d[16];

int lcm(int x, int y) {
	for(int i = x > y ? x : y; ; i++) {
		if(i % x == 0 && i % y == 0) {
			return i;
		}
	}
}


int solution(vector<int> arr) {
    int answer = 0;
    int lcmN;
    sort(arr.begin(), arr.end());
   
    d[0] = arr[0];
    d[1] = lcm(arr[1], arr[0]);
    d[2] = lcm(arr[2], d[1]);
    
    for(int i = 1; i < arr.size(); i++) {
		d[i] = lcm(arr[i], d[i-1]);
		answer = d[i];
	}
    return answer;
}
int main() {
	
	cout <<	solution({2,6,8,14});

}
