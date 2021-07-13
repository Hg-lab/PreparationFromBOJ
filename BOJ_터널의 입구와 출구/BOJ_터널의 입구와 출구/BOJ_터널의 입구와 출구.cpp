#include <iostream>

using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int answer = m;
	int maxAnswer = answer;
	int carIn = 0;
	int carOut = 0;
	bool printZero = false;
	for (int i = 0; i < n; i++) {
		cin >> carIn >> carOut;
		answer += carIn;
		answer -= carOut;
		if (maxAnswer < answer)maxAnswer = answer;
		if (answer < 0) printZero = true;

	}
	if (printZero == true) cout << 0;
	else cout << maxAnswer;
	return 0;
}