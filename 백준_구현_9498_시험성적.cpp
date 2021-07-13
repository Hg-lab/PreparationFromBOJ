#include <stdio.h>

int main() {
	int score;
	scanf("%d", &score);
	
	score /= 10;
	if(score < 6) {
		printf("F");
	} else {
	switch (score){
	case 10 :
	case 9 :
		printf("A");
		break;
	case 8 : 
		printf("B");
		break;
	case 7 :
		printf("C");
		break;
	case 6 :
		printf("D");
		break;
	
}
}
}
