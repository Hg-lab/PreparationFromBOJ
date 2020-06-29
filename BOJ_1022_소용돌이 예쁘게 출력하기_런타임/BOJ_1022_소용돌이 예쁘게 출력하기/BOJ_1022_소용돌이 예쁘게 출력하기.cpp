#include <iostream>

using namespace std;

int arr[51][51];
// 가로 50, 세로 5

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	arr[25][25] = 1; // 0~24 25 26~50 [25][25] = (0,0) [0][0] = (-25,-25)

	int dxPlus = 1, dxMinus = -1, dyPlus = 1, dyMinus = -1;
	int x=25, y=25, input = 2;
	x += dxPlus;
	arr[x][y] = input;
	input++;
	y += dyPlus;
	arr[x][y] = input;
	input++;
	int i = 2;
	while (arr[x][y] != 0 && i <= 50) {
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
	r1 += 25; c1 += 25; r2 += 25; c2+=25;

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
			printf("%2d", arr[i][j]);
			printf(" ");
		}
		cout << '\n';
	}
}