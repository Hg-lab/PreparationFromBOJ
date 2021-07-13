#include <stdio.h>

int main() {
	int num1, num2;
	int i;
	int gcd = 0; // 최대공약수 
	int lcm = 0;
	scanf("%d %d", &num1, &num2);
	
	for(i = 1; num1 > num2 ? i <= num2 : i <= num1 ; i++) {
		if(num1 % i == 0 && num2 % i == 0) {
			gcd = i;
		}
	}

	for(i = num1 > num2? num1 : num2 ; ; i++) {
		if(i % num1 ==0 && i % num2 == 0) {
			lcm = i;
			break;
		}
	}
	
	printf("%d\n%d", gcd, lcm);
}
