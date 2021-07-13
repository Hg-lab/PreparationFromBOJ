#include <iostream>

using namespace std;
const int MAX = 101;
bool arr[MAX][MAX];

int main()
{
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) {
		int x, y;
		cin >> x >> y;
		for (int idxX = x; idxX < x + 10;idxX++) {
			for (int idxY = y; idxY < y + 10;idxY++) {
				if(!arr[idxX][idxY])
				arr[idxX][idxY] = true;
			}
		}
	

	}
	int answer = 0;
	for (int i = 0; i < MAX;i++) {
		for (int j = 0; j < MAX;j++) {
			answer += arr[i][j];
		}
	}
	cout << answer;
}