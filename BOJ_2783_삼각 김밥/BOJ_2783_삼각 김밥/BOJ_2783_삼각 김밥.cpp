#include <iostream>
#include <cmath>
using namespace std;

const double MAX = 999999999.99;
int main()
{
	double x, y; int n;
	double price = 0;
	cin >> x >> y >> n;
	double minPrice = x / y * 1000;

	for (int i = 0; i < n;i++) {
		double xi, yi;
		cin >> xi >> yi;
		price = (xi / yi) * 1000;
		if (minPrice > price) minPrice = price;

	}
	printf("%.2f", minPrice);
	return 0;
}
