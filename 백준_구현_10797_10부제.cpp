#include <iostream>

using namespace std;

int main() {
	int day;
	cin >> day;
	int n[5];
	for(int i = 0; i < 5; i++){
	cin >> n[i];
	}
	
	int count = 0;
	for(int i = 0 ; i < 5; i ++ ){
		if (day == n[i])
		{
			count++;	
		}
	}
	cout << count;
	return 0;
}
