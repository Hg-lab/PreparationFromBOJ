#include <stdio.h>

int main()
{
	int a, b, c, temp;
	int i = 0;
	int array[10];

	scanf("%d %d %d", &a, &b, &c);
	
	int x = a*b*c;
	while(x != 0){
		temp = x % 10;
		array[i] = temp;
		x /= 10;
		i++;
	}

	int size = i;
	int count[10]={0,};
	
	for(int i = 0; i < size; i++) {
		count[array[i]]++;	
	}
	
	for(int i = 0; i < 10; i++)
	{
		printf("%d\n", count[i]);
	}
	

}
