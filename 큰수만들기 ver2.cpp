#include <string>
#include <vector>
#include <algorithm>
#include <iostream> 

using namespace std;

int main () {
	string number;
	int k; 
	cin >> number >> k;
	
    string answer = "";
	char max = '0';
	int start = 0;
	int temp = 0; 
	int i = 0;
	while(k!=0 && i <= number.length()) {
		for(int j = i+1; j <= i+k; j++) {
			if(number[i] < number[j]) {
				while(i <= j-1){
				number[i] = 'x';
				i++;
				k--;
				}
				break;
			}
			else if(j == i + k){
				i++;
				break;
			}
		}
			
	}

	while(k!=0) {
	int min = 'a';
	int minidx = 0;
		for(int t = 0; t< number.length(); t++){
			if(min >= number[t])
			{
				min = number[t];
				minidx = t;
			}
		}
		number[minidx] = 'x';
		k--;
	}

	for(int i = 0; i < number.length(); i++) {
		if(number[i] != 'x') {
			answer.push_back(number[i]);
		}
	}		
	cout << number;
}
