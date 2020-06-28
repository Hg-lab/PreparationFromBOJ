#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
const int MAX = 99999999;
const int MIN = 0;
int main()
{
	int n;
	cin >> n;
	int minX = MAX, minY = MAX, maxX = MIN, maxY = MIN;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		if (x < minX) minX = x;
		if (y < minY) minY = y;	
		if (x >= maxX) maxX = x;
		if (y >= maxY) maxY = y;
	}
	int diffX = maxX - minX;
	int diffY = maxY - minY;
	int answer = max(diffX, diffY);

	answer *= answer;

	cout << answer;
}