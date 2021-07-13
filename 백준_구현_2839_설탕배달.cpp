#include <stdio.h>

int main()
{
	int n;

while(n!=0){
	int count = 0;
	int num_3, num_5 = 0;
	scanf("%d", &n);
	if(n % 5 == 0){
		num_5 = n/5;
	} else {
		for(int i = 0; i <= n/5; i++) {
			for(int j = 0; j <= n/3; j++) {
				if(n == 5*i + 3*j) {
					num_5 = i;
					num_3 = j;
				}
			}
		}
		
	}
	printf("%d %d\n", num_5, num_3);
	if(n != 5*num_5 + 3*num_3) {
		printf("-1");
	} else {
	count = num_5 + num_3;
	printf("%d", count);
	}
}

}
