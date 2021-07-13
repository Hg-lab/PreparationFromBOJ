#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
	vector<int> A;
	vector<int> B;
    int answer = 0;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    for(int i = 0; i < A.size(); i++) {
        for(int j = B.size() - 1 - i; j >= 0 ; j--) {
           answer += A[i] * B[j];
           break;
        }
    }
}
