#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int dx[] = { 1,0,-1,0 }; // right up left down
int dy[] = { 0,1,0,-1 };
int arr[5][50]; // x, y  ----------------> y,x 로 해야함?. 바로 옆 메모리 접근
void digitsCal(int , int, int, int);
int digitsNum(int);

int main()
{
	int r1, c1, r2, c2;
	cin >> r1 >> c1 >> r2 >> c2; // 왼위, 오른아래
	//(-3 -3 2 0) -> (-3,-2) ~ (0, 3)
	int x1, y1, x2, y2;
	x1 = c1; y1 = -r2; x2 = c2; y2 = -r1; // 좌표계 변환
	//cout << "(" << x1 << ", "<< y1 <<")"<< "~("<<x2<<", " << y2 << ")" <<"\n";

	digitsCal(x1, y1, x2, y2);
	//cout << arr[0][0];
	//for (int i = 0; i < 5;i++) {
	//	for (int j = 0; j < 50; j++) {
	//		cout << arr[i][j] << ' ';
	//	}
	//	cout << "\n";
	//}
	int MAX = 0;
	for (int j = y2 - y1; j >= 0; j--) {
		for (int i = 0; i <= x2 - x1; i++) {
			if (MAX < arr[i][j]) MAX = arr[i][j];
		}
	}

	for (int j = y2-y1; j >= 0; j--) {
		for (int i = 0; i <= x2-x1; i++) {
			for (int k = 0; k < digitsNum(MAX) - digitsNum(arr[i][j]); k++)
				printf(" ");
			printf("%d ", arr[i][j]);
		}
		cout << "\n";
	}
	return 0;
}

int digitsNum(int num) {
	int result = 1;
	while (num >= 10) {
		num = num / 10;
		result++;
	}
	return result;
}

void digitsCal(int x1, int y1, int x2, int y2) 
{
	int input = 1;
	int x = 0, y = 0; // (0,0)
	if (x1 <= x && x <= x2 && y1 <= y && y <= y2)
		arr[abs(x - x1)][abs(y - y1)] = input; // (-3,-2) ~ (0, 3)
	int repeat = 1;
	while (repeat <= 10001) {

		for (int i = 0; i < 2; i++) {

			for (int k = 1; k <= repeat; k++) {
				x += dx[i]; y += dy[i]; // right, up 1, 1
				input++;
				if (x1 <= x && x <= x2 && y1 <= y && y <= y2) {
					//cout << "(" << x << ", " << y << ") ";
					arr[abs(x - x1)][abs(y - y1)] = input;
				}
			}
		}
		repeat++;

		for (int i = 2; i < 4; i++) {
			for (int k = 1; k <= repeat; k++) {
				x += dx[i]; y += dy[i]; // left, down 2, 2
				input++;
				if (x1 <= x && x <= x2 && y1 <= y && y <= y2) {
					//cout << "(" << x << ", " << y << ") ";
					arr[abs(x - x1)][abs(y - y1)] = input;
				}
			}
		}
		repeat++;

	}
}
