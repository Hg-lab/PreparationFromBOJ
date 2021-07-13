#include <iostream>

using namespace std;
int main() {
	int result[3] = {0,};
	int x;
	for(int j = 0; j < 3; j++) {
		for(int i = 0; i < 4; i++) {
			cin >> x;
			result[j]+=x;
		}
	}

	for(int i=0; i < 3; i++){
	switch(result[i]) {
		case 0 :
			printf ("D\n");
			break;
		case 1 :
			printf ("C\n");
			break;
		case 2 :
			printf ("B\n");
			break;
		case 3 :
			printf ("A\n");
			break;
		case 4 :
			printf ("E\n");
			break;
		
		}
	}
}
