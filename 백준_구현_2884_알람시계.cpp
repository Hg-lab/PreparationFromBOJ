#include <stdio.h>

int main() {
	int h, m;
	scanf("%d %d", &h, &m);
	if(h == 0 && m < 45) {
		h = 23;
		m = 60 - 45 + m;
	} else {
	m += 60*h ;
	m -= 45;
	h = m/60;
	m %= 60;
	}
	printf("%d %d", h, m);
}
