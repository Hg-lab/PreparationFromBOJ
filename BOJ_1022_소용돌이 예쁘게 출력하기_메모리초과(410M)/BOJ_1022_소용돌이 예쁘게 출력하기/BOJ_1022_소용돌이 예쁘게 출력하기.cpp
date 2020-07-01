#include <iostream>
#include <string>
using namespace std;

int arr[10001][10001];
// 가로 50, 세로 5
int digitsNum(int);
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	arr[5000][5000] = 1; // 0~24 25 26~50 [25][25] = (0,0) [0][0] = (-25,-25)

	int dxPlus = 1, dxMinus = -1, dyPlus = 1, dyMinus = -1;
	int x=5000, y=5000, input = 2;
	x += dxPlus;
	arr[x][y] = input;
	input++;
	y += dyPlus;
	arr[x][y] = input;
	input++;
	int i = 2;
	while (arr[x][y] != 0 && i <= 10000) { // 전부 그리는 기능
		for (int repeat = 0; repeat < i; repeat++) {
			x += dxMinus;
			arr[x][y] = input++;
		}
		for (int repeat = 0; repeat < i; repeat++) {
			y += dyMinus;
			arr[x][y] = input++;
		}
		i++;
		for (int repeat = 0; repeat < i; repeat++) {
			x += dxPlus;
			arr[x][y] = input++;
		}
		for (int repeat = 0; repeat < i; repeat++) {
			y += dyPlus;
			arr[x][y] = input++;
		}
		i++;
	}

	int r1, c1, r2, c2;
	cin >> r1 >> c1 >> r2 >> c2; // (c1, r1) (c2, r2) 왼쪽위, 오른쪽 아래 TC (-3,3)(0,-2)
	r1 = -r1; r2 = -r2;
	r1 += 5000; c1 += 5000; r2 += 5000; c2+=5000;

	int startX = c1;
	int endX = c2;
	int startY = r1;
	int endY = r2;

	//int startX = r1;
	//int endX = r2;
	//int startY = c1;
	//int endY = c2;

	for (int j = startY; j >= endY; j--) {
		for (int i = startX; i <= endX; i++) {
			for (int k = 0; k < digitsNum(arr[startX][endY]) - digitsNum(arr[i][j]); k++) printf(" ");
			printf("%d", arr[i][j]);
			printf(" ");
		}
		cout << '\n';
	}
}
int digitsNum(int num) {
	int result = 1;
	while (num >= 10) {
		num = num / 10;
		result++;
	}
	return result;
}