#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	n = 1000-n; //620
	int count = 0;
	while(n >= 500) {
		n -= 500;
		count++;
	}

	while(n >= 100)
	{
		n-= 100;
		count++;
	}

	while(n >= 50)
	{
		n -= 50;
		count++;
	}
	while(n >= 10) {
		n -= 10;
		count++;
	}

	while(n >= 5) {
		n-=5;
		count++;
	}

	while(n >= 1) {
		n-=1;
		count++;
	}
	printf("%d", count);
	return 0;
}
