#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n, T; // 일 갯수, 시간 제한
	queue<int> q;
	cin >> n >> T;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		q.push(temp);
	}

	int count = 0;

	while (q.front() <= T && !q.empty()) {
		T -= q.front();
		q.pop();
		count++;
	}
	
	cout << count;

	return 0;
}
