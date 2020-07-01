#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string word;
	vector<string> answer;
	int lineSize = 0;

	while (cin >> word) {
		if (word == "<br>") {
			cout << "\n";
			lineSize = 0;

			continue;
		}

		if (word == "<hr>") {
			if (lineSize != 0) {
				cout << "\n";
			}
			for (int repeat = 1; repeat <= 80; repeat++) {
				cout << "-";
			}
			cout << "\n";
			lineSize = 0;
			continue;
		}

		if (lineSize + word.length() <= 80) {
			cout << word << " ";
			lineSize += word.length() + 1;
		}
		else {
			cout << "\n";
			cout << word << " ";
			lineSize = word.length() + 1; // 공백 1 포함해서 +1
		}
	}

	return 0;
}
