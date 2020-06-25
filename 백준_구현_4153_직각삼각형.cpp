#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>

using namespace std;

int main () {
	vector<int> v;
	vector<int>::iterator it;
	int a, b, c = 1;
	while(a != 0 || b != 0 || c != 0) {
		scanf("%d %d %d", &a, &b, &c);
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
	}
	int TF[v.size()/3 - 1] = {0,};
	for(int i = 0; i < v.size(); i++) {
		if(v[i] == 0) break;
		if(pow(v[3*i], 2) + pow(v[3*i+1], 2) == pow(v[3*i + 2], 2))
		{
			TF[i] = true;
		}
	}
	
	for(int i = 0; i < v.size()/3 - 1; i++) {
		if(TF[i]) printf("right\n");
		else printf("wrong\n");
	}
} 
