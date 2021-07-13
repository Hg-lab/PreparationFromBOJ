#include <stdio.h>

int number = 9;
int heap[9] = {7, 6, 5, 8, 3, 5, 9, 1, 6};

int main() {
	for(int i = 1; i < number; i++) { // c�� �ڽ��̶� 1����. 
		int c = i;
		do {
			int root = (c - 1) / 2; // (2-1)/2�� 0.5 = int 0��. ����. 
			if(heap[root] < heap[c]) {
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root; // i = 3�̻��� �� ���ǹ���.  c=3 --> c=1�� �Ѿ�� ��˻� 
		}while(c != 0); // ó���� c�� max node�� ������ ���ͼ� �ٽ� c=2���� ��ӵ���. 
	}
	
	for(int i = number - 1; i >= 0; i--) { // ���̶� �ٲ��ַ��� �ϴ� i�� �ǵڷ� ����� 
		int temp = heap[0]; 				// �ڿ������ͳ�����, �ǵڿ��� �ٲٰ� ������� 
		heap[0] = heap[i];
		heap[i] = temp;
		int root = 0; // �ϴ� ó���� ùĭ���ͽ����ؾ���. �������� max node�� �����ϱ�. 
		int c = 1;
		do {
			c = 2 * root + 1;
			if(heap[c] < heap[c + 1] && c + 1 < i) { // c���� �������� �������� c+1 < i �Ǿ���� 
				c++;								// c+1�� i, �� �����Ǿ��ִ� ���̸� �ȵȴ� 
			}										// c+1�� i �� �翬�� ũ��. 
			if(heap[root] < heap[c] && c < i) { // c�� i �̸� root ���� �翬�� ũ��. 
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
