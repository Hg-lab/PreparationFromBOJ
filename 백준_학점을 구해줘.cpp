#include <iostream>
#include <string>
#include <vector>

using namespace std;

class subject {
	public :
	int n; 
	int credit;
	float score;
	
	subject(int n, int credit, float score) {
		this->n = n;
		this->credit = credit;
		this->score = score;
	}
};

int main() {
	int t, n;
	cin >> t;
	int credit;
	float score;
	vector< vector<subject> > semester; 
// 입력부 
	for(int i = 0; i < t; i ++){
		cin >> n;
		vector<subject> v;
		for(int i = 0; i < n; i++){
			cin >> credit >> score;
			v.push_back(subject(n, credit, score));
		}
		semester.push_back(v);
	}
//출력부
	int sumCredit = 0;
	float mulScore = 0;
	float mulScoreSum = 0;
	float avg[] = {0, };
	for(int i = 0; i < t; i++) {
			sumCredit = 0;
			mulScoreSum = 0;
		for(int j = 0; j < semester[i].size(); j++){
			sumCredit += semester[i][j].credit;
			mulScore = semester[i][j].score*semester[i][j].credit;
			mulScoreSum +=mulScore;
		}
			avg[i] = mulScoreSum / sumCredit;
			cout << sumCredit << ' ' << avg[i] << '\n';
	}
}











