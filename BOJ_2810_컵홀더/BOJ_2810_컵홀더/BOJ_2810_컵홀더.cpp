#include <iostream>
#include <string>

using namespace std;
int main()
{
	int n;
	cin >> n;
	char temp;
	string s;
	cin >> s;
	int count = 0;
	//cout << '*';
	count++;
	int L = 0;
	for (int i = 0; i < s.length(); i++) {
		//cout << s[i];
		if (s[i] == 'S') {
			//cout << '*';
			count++;
		}
		if (s[i] == 'L') {
			L++;
			if (L == 2) {
				//cout << '*';
				count++;
				L = 0;
			} else continue;
		}
	}
	if (count > n) cout << n;
	else cout << count;

	return 0;
}