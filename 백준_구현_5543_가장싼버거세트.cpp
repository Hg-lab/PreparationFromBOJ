#include <iostream>
#include <algorithm> // std::min_element
#include <vector>
using namespace std;
int main() {
	int b[3];
	for(int i = 0; i < 3; i++){
	cin >> b[i];
	}
	int d[2];
	for(int j = 0; j < 2; j++){
	cin >> d[j];
	}
	int sum = 0;
	int min = INT_MAX;
	for(int i = 0; i < 3; i++)
	{
			for(int j = 0; j < 2; j++)
			{	
				sum = b[i] + d[j] - 50;
				if(sum < min)
				{
					min = sum;
				}
			}
	}
	cout << min;
	

}
/*
#include <iostream>
#include <algorithm> // std::min_element
#include <vector>
int main( void) {

int arr[ 5] = { 1, 2, 3, 4, 5};
std::vector<int> vec( arr, arr + 5);

std::cout << *std::min_element( arr, arr + 5) << std::endl;
std::cout << *std::max_element( vec.begin(), vec.end()) << std::endl;
}

int main() {
	int b[3];
	for(int i = 0; i < 3; i++){
	cin >> b[i];
	}
	int d[2];
	for(int j = 0; j < 2; j++){
	cin >> d[j];
	}
	int sum = 0;
	int min = INT_MAX;
	for(int i = 0; i < 3; i++)
	{
			for(int j = 0; j < 2; j++)
			{	
				sum = b[i] + d[j] - 50;
				if(sum <= min)
				{
					min = sum;
				}
			}
	}
	cout << min;
	

}*/
