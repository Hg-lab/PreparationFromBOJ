﻿#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int count = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = i; i * j <= n; j++) {
			count++;
		}
	}
	cout << count;
}
