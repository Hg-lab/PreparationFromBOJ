#include <iostream>
#include <vector>
#include <queue>
using namespace std;
// ���� n�� k��° �ڸ��� ���ϴ� �Լ�
int fun(int n, int k) {
	int answer = 0;
	for(int i = 1; i <= k-1; i++) {
		n /= 10;
	}
	answer = n % 10;
	
	return answer;
} 

int main() {
	int n, k;
	cin >> n >> k;
	
	cout << fun(n,k);
}
