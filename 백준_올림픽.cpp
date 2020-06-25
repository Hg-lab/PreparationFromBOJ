#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class country {
	public : 
	int id, g, s, b;
	
	country(int id, int g, int s, int b) {
		this->id = id;
		this->g = g;
		this->s = s;
		this->b = b;
	}
};

bool compare(country a, country b) {
	if (a.g == b.g) {
		if (a.s == b.s) {
			return a.b > b.b;
		}
		return a.s > b.s;
	}
	return a.g > b.g;
}

int main() {
	int n, k; // k´Â id
	int tempID, tempG, tempS, tempB;
	int answer = 0;
	cin >> n >> k;
	
	vector<country> v;
	
	for(int i = 0; i < n; i++) {
		cin >> tempID >> tempG >> tempS >> tempB;
		v.push_back(country(tempID, tempG, tempS, tempB));
	}
	
	sort(v.begin(), v.end(), compare);
	
//	for(int i = 0; i < n; i++) {
//		cout << v[i].id << v[i].g << v[i].s << v[i].b << endl;
//	}
	
	
	for(int i = 0; i < n; i++) {
		if(v[i].id == k) {
			answer = i;
			break;
		}
	}
	int tempAnswer = answer;
	for(int j = 0; j < answer; j++) {
		if(v[j].g == v[answer].g && v[j].s == v[answer].s && v[j].b == v[answer].b)
		{
			tempAnswer--;
		}
	}
	cout << tempAnswer + 1;
}
