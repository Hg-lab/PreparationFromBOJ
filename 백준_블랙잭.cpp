#include <iostream>
#include <algorithm>
#include <vector>
// n�� ī�� �� 3�� �̾� �� m���� ������� �ձ��ϱ� 
using namespace std;

int main(){
	int n = 0, m = 0;
	int temp = 0;
	cin >> n >> m;
	vector<int> v;
	
	for(int i = 0; i < n; i++) {
		cin >> temp;
		v.push_back(temp);
	}
	int sum = 0, diff = 999999;
	for(int i = 0; i < n - 2; i++) {
		for(int j = i + 1; j < n - 1; j++) {
			for(int k = j + 1; k < n; k++) {
				sum = v[i] + v[j] + v[k];
				if(m - sum < diff && sum <= m) {
					diff = m - sum;
				}
			}
		}
	}
	cout << m - diff;
}
