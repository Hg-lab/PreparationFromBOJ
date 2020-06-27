//#include <iostream>
//#include <vector>
//using namespace std;
//
//int gcd(int a, int b) {
//	if (a < b) {
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a % b == 0) return b;
//	return gcd(b, a % b);
//}
//
//int numCD(int x) {
//	int count = 0;
//	for (int i = 1;i <= x;i++) {
//		if (x % i == 0) count++;
//	}
//	return count-1;
//}
//
//int main()
//{
//	int max = 0;
//	int n; // 학생수
//	int c; // 총 시간
//	cin >> n >> c;
//	vector<int> v; // 학생 주기 담을 배열
//	int temp;
//	for (int i = 0; i < n; i++) {
//		cin >> temp;
//		v.push_back(temp);
//	}
//
//	bool outbound = false;
//	for (int i = 0; i < v.size(); i++) {
//		if (v[i] <= c) {
//			outbound = true;
//			break;
//		}
//		else outbound = false;
//	}
//
//	if (outbound == true) {
//		int count = 0;
//
//		int gcdOfvector = 0;
//		for (int i = 0; i < v.size();i++) {
//			for (int j = 0;j < i;j++) {
//				if (gcdOfvector < gcd(v[i], v[j])) {
//					gcdOfvector = gcd(v[i], v[j]);
//				}
//			}
//		}
//
//		for (int i = 0; i < v.size(); i++) {
//			count += c / v[i];
//		}
//
//		cout << count - numCD(gcdOfvector);
//	}
//	else cout << 0;
//	return 0;
//
//}
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int arr[20000001];
//
//int main() {
//
//	int n, c;
//	int student[100];
//	cin >> n >> c;
//	int temp;
//	int count = 0;
//	for (int i = 0; i < n;i++) {
//		cin >> temp;
//		student[i] = temp;
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = student[i]; j <= c;j += student[i]) {
//			arr[j] = 1;
//		}
//	}
//
//	for (int i = 0; i <= c;i++) {
//		if (arr[i] == 1) count++;
//	}
//	cout << count;
//
//	return 0;
//}
#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;

int main() {

	int n, c;
	vector<int> student;
	cin >> n >> c;
	int temp;
	int count = 0;
	for (int i = 0; i < n;i++) {
		cin >> temp;
		student.push_back(temp);
	}
	arr.resize(c+1);

	for (int i = 0; i < n; i++) {
		for (int j = student[i]; j < arr.size();j += student[i]) {
			arr[j] = 1;
		}
	}
	
	for (int i = 0; i < arr.size();i++) {
		if (arr[i] == 1) count++;
	}
	cout << count;

	return 0;
}