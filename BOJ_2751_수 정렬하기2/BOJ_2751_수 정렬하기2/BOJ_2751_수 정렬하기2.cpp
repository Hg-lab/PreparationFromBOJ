/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int temp = 0;
	vector<int> v;
	for (int i = 0; i < n;i++) {
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	
	for (auto i : v) {
		cout << i <<'\n';
	}
}
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 1000000;
int arr[MAX];
int sorted[MAX];

void merge(int low, int mid, int high) {
	int i = low, j = mid + 1, k = low;

	while (i <= mid && j <= high) {
		if (arr[i] < arr[j]) {
			sorted[k] = arr[i];
			i++;
		}
		else {
			sorted[k] = arr[j];
			j++;
		}
		k++;
	}
	if (i > mid) {
		for (int t = j; t <= high; t++) {
			sorted[k] = arr[t];
			k++;
		}
	}
	else {
		for (int t = i; t <= mid; t++) {
			sorted[k] = arr[t];
			k++;
		}
	}
	for (int t = low; t <= high; t++) {
		arr[t] = sorted[t];
	}
}

void mergeSort(int low, int high) {
	// 한칸 크기가 1인 경우 까지 분할(재귀함수조건)
	if (low < high) {
		int mid = (low + high) / 2;
		mergeSort(low, mid);
		mergeSort(mid + 1, high);
		merge(low, mid, high);
	}
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n;i++) {
		int temp;
		cin >> temp;
		arr[i] = temp;
	}

	mergeSort(0, n - 1); // high = n - 1임 (index 값)
	for (int i = 0; i < n;i++) {
		cout << arr[i] << '\n';
	}
}
