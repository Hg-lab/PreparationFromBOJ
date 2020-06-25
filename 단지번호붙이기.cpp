#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;
// 숫자 n의 k번째 자릿수 구하는 함수
int fun(int n, int k) {
	int answer = 0;
	for(int i = 1; i <= k-1; i++) {
		n /= 10;
	}
	answer = n % 10;
	
	return answer;
}

const int size = 26;
int c[size][size];
//vector<int> v[max][max]; 인접노드 적던 벡터 필요없음.
int dx[] = {-1, 0, 1, 0}; // diffx x변화량 
int dy[] = {0, -1, 0, 1};
int data[size][size];
vector<int> countApart;	

class dot {
public : 
	int x;
	int y;
	dot (int x, int y) {
		this->x = x;
		this->y = y;
	}
};

//bfd함수 
void bfs(int startR, int startC) {
	//start는 인덱스 row coloumn
	c[startR][startC] = 1;
	queue<dot> q;
	int count = 1; // main 에서 1을 만날때 실행하므로 
	q.push(dot(startR, startC));
	while(!q.empty()) {
		int nodeX = q.front().x;
		int nodeY = q.front().y;
		q.pop();
		for(int i = 0; i < 4; i++) { // 4 = 이동할 가지의 수, 인접노드의 수 
			int nextX = nodeX + dx[i];
			int nextY = nodeY + dy[i];
			
			if(data[nextX][nextY] == 1 && c[nextX][nextY] == 0
		 && nextX >=0 && nextY >= 0 && nextX < size && nextY < size) {
				c[nextX][nextY] = 1;
				count ++;
				q.push(dot(nextX, nextY));
			} 
		}
	}
	countApart.push_back(count);
}
int main() {
	//입력부
	int n;
	cin >> n;
	string row;
	
	for(int i = 0; i < n; i++) {
		cin >> row;
		for(int k = 0; k < n; k++) {
			data[i][k] = row[k] - '0';
		}
	}
	int countComplex = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(data[i][j] == 1 && c[i][j] == 0) {
				countComplex ++;
				bfs(i, j);
			}
		}
	} 
	sort(countApart.begin(), countApart.end());
	
	cout << countComplex << endl;
	for(int i = 0; i < countApart.size(); i++) {
		cout << countApart[i] << endl;
	}
	
//		for(int i = 0; i < n; i++) {
//		for(int j = 0; j < n; j++) {
//			cout << connected[i][j] << ' ';
//		}
//			cout << '\n';
//		}
}
/*
7
0110100
0110101
1110101
0000111
0100000
0111110
0111000
*/

