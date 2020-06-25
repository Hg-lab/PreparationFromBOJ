#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

long long solution(long long n) {
    long long answer = 0;
    float x = sqrt(n);
    if(x - (int)x == 0) {
    	answer = x;
	} else {
		answer = -1;
	}
    return answer;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", solution(n));
}
