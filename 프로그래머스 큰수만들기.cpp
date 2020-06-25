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
    char max = 0;
    int maxIdx = 0;
    for(int i = 0 ; i < number.size(); i++){
        if(max <= number[i] && k != 0) {
            max = number[i];
            maxIdx = i;
            for(int j = 0; j < i ; j++) {
                number[j] = 'x';
                k--;
                
            }
        }
            if (number[0] == 'x') break;
        }
   
    for (int i = maxIdx; i < number.size() - 1; i++) {
        if(k > 0) {
            if(number[i] < number[i+1]) {
                number[i] = 'x';
                k--;
            }
        } else if ( k == 0) break;
    }
    for(int i = 0; i < number.size(); i++) {
        if(number[i] != 'x')
        answer.push_back(number[i]);
    }
    cout << answer;

}
