#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	long long int s;
	scanf("%lld", &s);
	long long int n = 0, sum = 0, count = 0;
	for(int i = 1; i <= s ; i++) {
		sum += i;
		count = i;
		if(sum >= s) break;

	}
	if(sum > s) count -= 1;
	printf("%lld", count);
}
