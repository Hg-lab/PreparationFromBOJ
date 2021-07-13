#include <stdio.h>
int main()
{
	int month, day;
	scanf("%d %d", &month, &day);
	int dayOfmonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(month != 1){
	for(int i = 0; i < month-1; i++)
	day += dayOfmonth[i];	
	}
	while(day >=7){
	day -= 7;
	}
	switch(day) {
		case 1:
			printf("MON");
			break;
		case 2:
			printf("TUE");
			break;
		case 3:
			printf("WED");
			break;
		case 4:
			printf("THU");
			break;
		case 5:
			printf("FRI");
			break;
		case 6:
			printf("SAT");
			break;
		case 0:
			printf("SUN");
			break;
						
	}

}
