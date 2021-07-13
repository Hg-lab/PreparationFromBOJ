#include <iostream>
#include <vector>

using namespace std;

int arrA[1001];//index : 순위, value : 비용
int vote[1001];

int main()
{
	int n, m; // 후보 종목 n, 위원 수 m
	cin >> n >> m;
	//vector<pair<int, int> > a; // <index, Ai>
	vector<int> b; // 기준
	for (int i = 1; i <= n;i++) {
		int Ai; // 필요한 비용
		cin >> Ai;
		arrA[i] = Ai;
	}
	for (int j = 1; j <= m;j++) {
		int Bj; // 심사기준
		cin >> Bj;
		for (int i = 1; i <= n; i++) {
			if (Bj >= arrA[i]) {
				vote[i]++;
				break;
			}
		}
	}
	int answer = 0;
	int maxVote = 0;
	for (int i = 1; i <= n; i++) {
		if (vote[i] > maxVote) {
			maxVote = vote[i];
			answer = i;
		}
	}
	cout << answer;
	return 0;
}