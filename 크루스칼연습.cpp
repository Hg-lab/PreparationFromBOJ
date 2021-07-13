#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Edge {
public :
	int node[2];
	int distance;
	
	Edge(int a, int b, int distance) {
		this->node[0] = a;
		this->node[1] = b;
		this->distance = distance; 
	}
	
	bool operator <(Edge edge) {
		return this->distance < edge.distance;
	}
};

int getParent(int p[], int x) {
	if(p[x] == x) return x;
	return p[x] = getParent(p, p[x]);
}

void unionNode(int p[], int a, int b){
	a = getParent(p, a);
	b = getParent(p, b);
	if(a<b) p[b] = a;
	else p[a] = b;
}

bool findParent(int p[], int a, int b) {
	if(p[a] == p[b]) return true;
	else return false;
}

int main () {
	int n = 7;
	int m = 11;
	int p[n+1];
	for(int i = 1; i <= n; i++) {
		p[i] = i;
	}
	vector<Edge> v;
	
	v.push_back(Edge(1, 7, 12));// 생성자 함수를 통해 객체를 조기화, 동시에 벡터에 삽입
	v.push_back(Edge(1, 4, 28));
	v.push_back(Edge(1, 5, 17));	
	v.push_back(Edge(1, 2, 67));
	v.push_back(Edge(2, 4, 24));
	v.push_back(Edge(2, 5, 62));
	v.push_back(Edge(3, 5, 20));
	v.push_back(Edge(3, 6, 37));
	v.push_back(Edge(4, 7, 13));
	v.push_back(Edge(5, 6, 45));
	v.push_back(Edge(5, 7, 73));
	sort(v.begin(), v.end());
	int sum = 0;
	for(int i = 0; i < v.size(); i++) {
		if(! findParent(p, v[i].node[0], v[i]. node[1])){
			unionNode(p, v[i].node[0], v[i].node[1]);
			sum += v[i].distance;
			cout << v[i].node[0] <<' '<< v[i].node[1] << '\n';
		}
	}
	cout << sum << '\n';

}
