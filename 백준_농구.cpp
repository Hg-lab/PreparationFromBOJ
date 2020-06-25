#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
//농구 선수의 첫글자로 엔트리짜기 
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string> v;
	
	//문자열입력부
	string input;
	for(int i = 0; i < n; i++) {
		cin >> input;
		v.push_back(input);
	}
	
	//첫글자만 뽑아내기
	char arr[n] = {'\0', }; 
	for(int i = 0; i < n; i++) {
		arr[i] = v[i][0];
	}
	
//	for(int i = 0; i < n; i++) {
//		cout << arr[i] << endl;
//	}

	bool checked[26] = {0, };
	int count[26] = {0, };
	
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) {
			if(arr[i] == arr[j]) {
				count[arr[i]-'a'] ++;
				arr[j] = 0;
			}
		}
	}
		for(int i = 0; i < 26; i++) {
			count[i]++;
			
		}
//			for(int i = 0; i < 26; i++) {
//			cout << count[i];
//			
//		}
	int countPrint = 0;
	for(int i = 0; i < 26; i++) {
		if(count[i] >= 5)
		{
			countPrint++;	
		}
	}
	if(countPrint == 0) {
		cout << "PREDAJA";
	}
	
	else{
		for(int i = 0; i < 26; i++) {
			if(count[i] >= 5)
			{
				cout << char(i+'a');	
			}
		}
	}
}

