#include<string>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
    stack<char> st;

bool solution(string s)
{
    bool answer = true;
    int count = 0;
    for(int i = 0; i < s.length(); i++) {
    	if(s[i] == ')') {
    		count ++;
		}
	}
    if(count != s.length()/2) {
    	return false;
	}
    
    else if(s.length() % 2 != 0) {
    	return false;
	}
	else if(s[0] == ')'){ 
    	return false;
	}
	else {
		for(int i = 0; i < s.length(); i++) {
			if(s[i] == ')' && st.empty()) {
				return false;
			}
			else if(s[i] == '(') {
				st.push(s[i]);
			}
			else if(s[i] == ')'&& st.top() == '('){
				st.pop();
			}
		}
		
	}
	
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return st.empty();
}	

int main () {
	string s;
	cin >> s;
	cout << solution(s) << '\n';
	while(!st.empty()) {
		cout << st.top() << ' ';
		st.pop();
	}
}
