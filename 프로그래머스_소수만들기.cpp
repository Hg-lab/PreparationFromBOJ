#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// vector안에 수 3개를 뽑아 더해서 소수의 갯수가 몇개나오나 
bool primeNum(int n) {
	for(int i = 2; i < n; i++)
	{
		
		if(n % i == 0) return false;
	}
	
	return true;
}

int solution(vector<int> nums) {
    int answer = 0;
	sort(nums.begin(), nums.end());
	//	int a[51];
	//	for(int i = 1; i < 51; i++) {
	//		for(int j = 0; j < nums.size(); j++) {
	//			if(i == nums[j]) {
	//				a[i] = j;
	//			}
	//		}
	//	}
	
	for(int i = 0; i < nums.size(); i++)
	{
		for(int j = i+1; j < nums.size(); j++) {
			for(int k = j+1; k < nums.size(); k++) {
				cout << nums[i] << nums[j] << nums[k] << ' ' << nums[i]+nums[j]+nums[k] <<'\n';
				
				if(primeNum(nums[i]+nums[j]+nums[k])) answer ++;
			}
		}
	}

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}

int main() {
	cout <<	solution({1,2,7,6,4});
}
