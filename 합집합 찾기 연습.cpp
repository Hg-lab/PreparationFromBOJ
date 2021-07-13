#include <iostream>
#include <stdio.h>

int getParent(int parent[], int x) {
	if(parent[x] == x) return x; // ����Լ��� ����κ�����, �ڱ��ڽ��� �θ���� x��ü�� ��ȯ��
	return parent[x] = getParent(parent, parent[x]);	//x�� �־��ָ� parent �迭������ �θ��带 ��ȯ�ϰԲ� ��͸�� 
}

void unionParent(int parent[], int a, int b) {
	a = getParent(parent, a);
	b = getParent(parent, b);
	if(a < b) parent[b] = a;
	else parent[a] = b;
}

bool findParent(int parent[], int a, int b) {
	a = getParent(parent, a);
	b = getParent(parent, b);
	if(a == b) return true;
	else return false;
}

int main() {
	int parent[11];
	for(int i = 0; i <= 10; i++) {
		parent[i] = i;
	}
	unionParent(parent, 1, 2); 
	unionParent(parent, 2, 3);
	unionParent(parent, 3, 4);
	

	unionParent(parent, 5, 6);
	unionParent(parent, 6, 7); 
	unionParent(parent, 7, 8);
	unionParent(parent, 8, 9);
	unionParent(parent, 1, 9);
	
	printf("%d", findParent(parent, 1, 8));
		for(int i = 0; i <= 10; i++) {
		printf("%d ", parent[i]);
	}
}
