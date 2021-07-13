#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string max(string a, string b) {
	if(a.length() > b.length()) {
		return a;
	}
	else return b;
}

string min(string a, string b) {
	if(a.length() < b.length()) {
		return a;
	}
	else return b;
}

int main () {
	string n1;
	string n2;
	char op;
	
	cin >> n1 >> op >> n2;
	string answer = max(n1, n2);
	
//	if(n1 == "1" || n2 == "1") {
//		cout << max(n1,n2);
//	} else{

	if(op == '*') {
		for(int i = 0; i < min(n1,n2).size()-1; i++) {
			answer = answer + '0';
		}
		
	} else {
		if(n1.length() == n2.length()) {
			answer[0] = '2';
		}
		
		else if(n1.size() > n2.size()){
			n1[n1.size()-n2.size()] = '1';
			answer = n1;
		} else {
			n2[n2.size()-n1.size()] = '1';
			answer = n2;
		}
	}
	
	cout<< answer;
	
//}
}
