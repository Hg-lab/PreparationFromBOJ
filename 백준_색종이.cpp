#include <iostream>
#include <vector>

using namespace std;
bool c[26][26];
int main() {
	int n;
	cin >> n;
	int x, y;
	int sum = 0;
	vector<pair<int,int> > rect;
	for(int i = 0; i < n; i++) {
		cin >> x >> y;
		rect.push_back(pair<int,int> (x, y));
	}
	int range = 0;
	for(int i = 0; i < rect.size(); i++) {
		for(int j = 0; j < 10; j++) {
			if(c[rect[i].first][rect[i].second] == 0 && c[rect[i].first][rect[i].second+1] == 0 
			&& c[rect[i].first+1][rect[i].second] == 0 && c[rect[i].first+1][rect[i].second+1] == 0)
			{
				range++;
				c[rect[i].first][rect[i].second] = 1;
				c[rect[i].first][rect[i].second+1] = 1;
				c[rect[i].first+1][rect[i].second] = 1;
				c[rect[i].first+1][rect[i].second+1] = 1;
				rect[i].first++;
				rect[i].second++;
			}
		}
	}
	return 0;
	cout << range;
}
