#include <string>
#include <vector>
#include <stack>
#include <iostream> 
using namespace std;

int main() {
	string arrangement;
	cin >> arrangement;
    int answer = 0;
	stack<char> s;
	
	for(int i = 0; i < arrangement.length(); i++) {
		s.push(arrangement[i]);
		if(i==0) continue;
		if(arrangement[i-1] == '(' && arrangement[i] == ')') {
			s.pop();
			s.pop();
			answer += s.size();
		}
		if(arrangement[i-1] == ')' && arrangement[i] == ')') {
			s.pop();
			s.pop();
			answer += 1;
		}

	}
   cout << answer;
}

