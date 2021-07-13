#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstring>

using namespace std;
int main(){
    string s;
    const int sizeOfArr = (int)('z' - 'a') + 1;
    
    int arr[sizeOfArr];
    cin >> s;

    for(int i = 0; i < sizeOfArr; i++) {
        arr[i] = -1;
    }


    for(int k = 0; k < s.length(); k++){
         for(char i = 'a'; i <= 'z'; i++){
            if(arr[(int)i - 97]==-1 && s[k] == i){
                arr[(int)i - 97] = k;
                break;
            }
        }
    }

    for(int i = 0; i < sizeOfArr; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

