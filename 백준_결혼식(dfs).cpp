#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
//#define size 501

// �ִܰŸ��� 2�� ģ������ �ʴ�, ����ΰ�? 
using namespace std;
const int size = 501; // c����� #define size�� ���� 

int checked[size]; // �ִ� 500��
vector<int> v[size];//���� �ϳ� ���Ҵ� ������尹����ŭũ���� �迭

void dfs(int start) {
	checked[start] = 1; // �湮ó������ �ڱ��ڽŰ��� �Ÿ��� 0 
	queue<int> q;
	q.push(start);
	
	while(!q.empty()) {
		int node = q.front();
		q.pop(); // q.pop(front) �����ʿ� ���� �׳� �ڵ����� �Ǿտ��� ���� 
		for(int i = 0; i < v[node].size(); i++) {
			int nextNode = v[node][i];

			if(checked[nextNode] == 0) {
				checked[nextNode] = checked[node] + 1;
				q.push(nextNode);
			} 
		}
	}
// �ڱ��ڽŰ��� �Ÿ��� 1�̹Ƿ� 1���� �����ϸ� �������� �� �ϳ��� �þ�ִ�
// �ٽ� ������Ѵ�.
// ���� start���ΰ��� �Ÿ��� 0���� �ع����� �̹� �湮�� ������ӿ��� �ұ��ϰ�
// node 2���� ������� �˻��� �� �ٽ� 1�� �˻��ع����� ��찡 ����. 
	for(int i = 0; i < size; i++) {
		if(checked[i] != 0) checked[i]--;
	}
}

int main() {
	int n, m = 0; // node����, ��������
	int tempA, tempB = 0;
	//�Էº� 
	cin >> n >> m;
	for(int i = 0; i < m; i++) {
		cin >> tempA >> tempB;
		v[tempA].push_back(tempB);
		v[tempB].push_back(tempA); 
	}
	
	dfs(1);
	
	int answer = 0;
	for(int i = 1; i <= n ; i++) {
		if(checked[i] == 1 || checked[i] == 2) {
			answer ++;
		}
	} 
	
	cout << answer;
} 









