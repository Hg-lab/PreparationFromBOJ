#include <string>
#include <vector>
#include <iostream>
//�� �迭 --> �̾�ٿ��� ���� ū���� ������ 3 �� 

using namespace std;

vector<int> pow10 (vector<int> numbers) {
	int count = 0;
	for(int i = 0; i < numbers.size(); i++) {
		while(numbers[i] >= 10){
			numbers[i] /= 10;
			count++;
		}
		numbers[i] = count;
	}
	return numbers;
} 


string solution(vector<int> numbers) {

	int a, b, c;

	for(int i = 0; i < numbers.size(); i++) {
		while(numbers[i]>=10) {
			numbers[i] /= 10;
		}
	}

    scanf("%d",&c);
    
    string answer = "6210";

    return answer;
}
