#include <stdio.h>

int number = 9;
int heap[9] = {7, 6, 5, 8, 3, 5, 9, 1, 6};

int main() {
	for(int i = 1; i < number; i++) { // c는 자식이라서 1부터. 
		int c = i;
		do {
			int root = (c - 1) / 2; // (2-1)/2는 0.5 = int 0임. 내림. 
			if(heap[root] < heap[c]) {
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root; // i = 3이상일 때 유의미함.  c=3 --> c=1로 넘어가서 재검사 
		}while(c != 0); // 처음에 c가 max node를 찍으면 나와서 다시 c=2부터 계속돈다. 
	}
	
	for(int i = number - 1; i >= 0; i--) { // 끝이랑 바꿔주려고 일단 i를 맨뒤로 찍어줌 
		int temp = heap[0]; 				// 뒤에서부터내려옴, 맨뒤에랑 바꾸고 수행시작 
		heap[0] = heap[i];
		heap[i] = temp;
		int root = 0; // 일단 처음에 첫칸부터시작해야함. 작은수가 max node로 왔으니까. 
		int c = 1;
		do {
			c = 2 * root + 1;
			if(heap[c] < heap[c + 1] && c + 1 < i) { // c옆에 고정값이 와있을때 c+1 < i 되어야함 
				c++;								// c+1이 i, 즉 고정되어있는 값이면 안된다 
			}										// c+1이 i 면 당연히 크다. 
			if(heap[root] < heap[c] && c < i) { // c가 i 이면 root 보다 당연히 크다. 
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			root = c;
		}while (c < i);
	}
	for(int i = 0; i < number; i++) {
		printf("%d ", heap[i]);
	}
}
