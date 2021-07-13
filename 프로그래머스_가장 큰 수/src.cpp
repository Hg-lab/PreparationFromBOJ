#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
// 90 9 8 --> 9908
// 99 9 8
int firstDigit(int a) {
    int result;
    while(a >= 10) {
        a = a - a%10;
        a /= 10;
    }
    result = a;
    return result;
}


bool compare(string a, string b) {
    int size;
    if(a.length() < b.length()) {
        size = a.length();
    } else {
        size = b.length();
    }
    
    for(int i = 0; i < size; i++) {
        if(a[i] != b[i]) { 
            return a > b; 
        } else {
            return a+b > b+a;
         } 
        
    }


}
string solution(vector<int> numbers) {
    int a, b, c;
    scanf("%d",&c);
    string answer;
    vector<string> strNumbers;
    for(int i = 0; i < numbers.size(); i++) {
        strNumbers.push_back(to_string(numbers[i]));
    }
    
    sort(strNumbers.begin(), strNumbers.end(), compare);
    
    if(strNumbers[0] == "0") return "0";
    
    for(int i = 0; i < strNumbers.size(); i++) {
        answer = answer.append(strNumbers[i]);
    }
    return answer;
}

int main(){
    
    solution({98, 9, 8});
    return 0;
}