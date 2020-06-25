#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
//#define size 501

// 최단거리가 2인 친구까지 초대, 몇명인가? 
using namespace std;
const int size = 501; // c언어의 #define size와 같음 

int checked[size]; // 최대 500명
vector<int> v[size];//백터 하나 원소당 인접노드갯수만큼크기의 배열

void dfs(int start) {
	checked[start] = 1; // 방문처리지만 자기자신과의 거리가 0 
	queue<int> q;
	q.push(start);
	
	while(!q.empty()) {
		int node = q.front();
		q.pop(); // q.pop(front) 해줄필요 없이 그냥 자동으로 맨앞에거 빠짐 
		for(int i = 0; i < v[node].size(); i++) {
			int nextNode = v[node][i];

			if(checked[nextNode] == 0) {
				checked[nextNode] = checked[node] + 1;
				q.push(nextNode);
			} 
		}
	}
// 자기자신과의 거리가 1이므로 1부터 시작하면 나머지는 다 하나씩 늘어나있다
// 다시 빼줘야한다.
// 만약 start본인과의 거리가 0으로 해버리면 이미 방문한 출발지임에도 불구하고
// node 2에서 인접노드 검사할 때 다시 1을 검사해버리는 경우가 생김. 
	for(int i = 0; i < size; i++) {
		if(checked[i] != 0) checked[i]--;
	}
}

int main() {
	int n, m = 0; // node갯수, 간선갯수
	int tempA, tempB = 0;
	//입력부 
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









