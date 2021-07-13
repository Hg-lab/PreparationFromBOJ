#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int  main() {
	vector<int> v= {1, 2, 3, 4, 5, 6};
	int i = 0;
	for(i = 0; i < v.size(); i++) {
		cout << v[i] << ' ';
	}
	cout << '\n';
	v.insert(v.begin()+2, 0);
	
	for(i = 0; i < v.size(); i++) {
		cout << v[i] << ' ';
	}
	
	int n = 4;
	v.reserve(8);
	
	cout<< '\n' << v.size();
}
