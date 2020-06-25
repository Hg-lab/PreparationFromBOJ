#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	int x = n;
	if (n == 0)
	x=1;
	else{
	for(int i = n-1; i >= 1; i--)
	{
		x *= i;
	}
	}
	printf("%d", x);

}
