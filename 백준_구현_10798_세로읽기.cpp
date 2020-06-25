#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	char str[5][15] = {'\0',};
	int i, j;
	for(i = 0; i < 5; i++){
		scanf("%s", &str[i]);
	}
	for(j = 0; j < 15; j++)
	{	for(i = 0; i < 5; i++){
		if(str[i][j] != '\0') printf("%c", str[i][j]);
		}
	}
	
	return 0;
}
