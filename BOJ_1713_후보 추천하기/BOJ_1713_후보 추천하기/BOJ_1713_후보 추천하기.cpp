//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//bool checked[101];
//bool compare(pair<int, pair<int, int> > p1, pair<int, pair<int, int> > p2) {
//	if (p1.second.second == p2.second.second) return p1.first > p2.first; // alternative : order DESC
//
//	return p1.second.second > p2.second.second; // priority of sorting : vote num DESC
//}
//
//int main()
//{
//	int n; int total;
//	cin >> n >> total;
//	vector<pair<int, pair<int, int>> > v;
//	for (int i = 1; i <= total; i++) {
//		int stud;
//		cin >> stud;
//		if (checked[stud] == false) { // 처음 들어온 것
//			checked[stud] = true;
//			v.push_back({ i, { stud, 1 } }); // (order, student number, vote)
//			for (int j = 0;j < n; j++) {
//				if (i > n&& v[j].second.second == v[i].second.second) v[j].second.second = 0;
//			}
//		}
//		else { // 이미 들어온 것 : checked[stud] = true;
//			for (int j = 0; j < v.size(); j++)  // Search container V
//				if (v[j].second.first == stud) {
//					v[j].second.second++; // vote +1;
//					break;
//			}
//			for (int j = 0;j < n; j++) {
//				if (i > n&& v[j].second.second == v[i].second.second) v[j].second.second = 0;
//			}
//		}
//	}
//	sort(v.begin(), v.end(), compare);
//
//	for (int i = 0; i < v.size(); i++) {
//		cout << "order :" << v[i].first << " stu : " << v[i].second.first << " vote : " << v[i].second.second << '\n';
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int N, K;
//// 추천 수, 처음 추천받은 시점, 사용된 사진틀 수
//int recommend[101], when[101], homany;
//
//int main() {
//	ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
//
//	cin >> N >> K;
//	for (int i = 1; i <= K; ++i) {
//		int student;
//		cin >> student;
//		// 이미 추천받은 경우 (사진틀이 있는 경우)
//		if (recommend[student] > 0) recommend[student]++;
//		// 새로 사진틀을 줘야하는 경우
//		else {
//			// 사용된 사진틀 수가 사진틀 개수보다 적은경우
//			if (homany < N) {
//				recommend[student]++;
//				when[student] = i;
//				homany++;
//			}
//			// 사용된 사진틀 중 하나를 뺏어 줘야하는 경우
//			else {
//				int change;
//				int reco = 1111;
//				for (int i = 1; i <= 100; ++i) {
//					if (!recommend[i]) continue;
//					// 추천 수 적으면 뺏을꺼
//					if (reco > recommend[i]) {
//						change = i;
//						reco = recommend[i];
//					}
//					// 추천 수 동률인 경우
//					else if (reco == recommend[i]) {
//						// 오래된애를 뺏을꺼
//						if (when[i] < when[change]) change = i;
//					}
//				}
//				// 새로 추천받은애
//				recommend[student]++;
//				when[student] = i;
//				// 빼았긴애
//				recommend[change] = 0;
//				when[change] = 0;
//			}
//		}
//	}
//	for (int i = 1; i <= 100; ++i)
//		if (when[i]) cout << i << ' ';
//
//	return 0;
//}
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

// 학생들이 추천을 시작하기 전에 모든 사진틀은 비어있다.
// 어떤 학생이 특정 학생을 추천하면, #추천받은 학생의 사진이 반드시 사진틀에 게시#되어야 한다.
// 비어있는 사진틀이 없는 경우에는 현재까지 #추천 받은 횟수가 가장 적은 학생의 사진을 삭제#하고,
// 그 자리에 #새롭게 추천받은 학생의 사진을 게시#한다.
// 이때, 현재까지 추천 받은 횟수가 가장 적은 학생이 두 명 이상일 경우에는 
// 그러한 학생들 중 게시된 지 #가장 오래된 사진#을 삭제한다.
// 현재 사진이 게시된 학생이 다른 학생의 추천을 받은 경우에는 추천받은 횟수만 증가시킨다.
// 사진틀에 게시된 사진이 삭제되는 경우에는 해당 학생이 추천받은 횟수는 0으로 바뀐다.
// 사진틀에 사진이 게재된 최종 후보의 학생 번호를 증가하는 순서대로 출력한다.

class Cls {
public:
	int num; // 학생 번호
	int vote; // 투표받은 수
	int order; // 들어온 순서
	Cls(int num, int vote, int order) {
		this->num = num;
		this->vote = vote;
		this->order = order;
	}
};
bool operator <(Cls cls1, Cls cls2) { // pq.top = 투표수 가장 작은것.
	if (cls1.vote == cls2.vote)
		return cls1.order > cls2.order; // 내림차순. stack 연상
	return cls1.vote > cls2.vote; //내림차순.
}

//bool checked[101];
int main() {

	int n; int total;
	cin >> n >> total; // n : 걸릴 수 있는 사진틀, total : 투표참여수
	vector<Cls> boardVec; // 게시판 벡터
	vector<int> checked(101, 0);

	for (int testCase = 1; testCase <= total; testCase++) {
		int recommended;
		cin >> recommended;

		if (checked[recommended]) { // 이전에 추천 받았을 때 : 게시판에 이미 걸려있음

			for (int i = 0; i < n; i++) { // 게시판 search
				if (boardVec[i].num == recommended) {
					boardVec[i].vote++;
					break;
				}
			}
			continue; // 이미 걸려있는 사진 추천받는다면, 다른 작업이 필요없다. 밑에 else if 경우를 따져줄 필요 없음
		}
		checked[recommended] = 1;

		if ((int)boardVec.size() < n) {// 게시판 자리 있을 때
			boardVec.push_back(Cls(recommended, 1, testCase)); // 추천번호, 득표수 1, 들어온순서
			continue;
		}
		else { // 자리 없고, 새로운 사진 추천받았을 때
			priority_queue<Cls> pq; // 철거할 사진 우선순위 따지기 위한 pq 생성
			for (int i = 0; i < boardVec.size(); i++) {
				pq.push(boardVec[i]); // pq에 넣고 우선순위 순으로 판별
			}
			Cls cls = pq.top(); // 철거 우선순위 가장 높은 것.
			checked[cls.num] = 0; // 추천수 초기화
			for (int i = 0; i < boardVec.size(); i++) { // 게시판 탐색
				if (boardVec[i].num == cls.num) {
					boardVec[i].num = recommended; // 철거 후, 새로 들어온 것으로 바꾸기
					boardVec[i].vote = 1;
					boardVec[i].order = testCase;
					break;
				}
			}
		}
	}

	vector<int> answerVec;
	for (int i = 0; i < boardVec.size(); i++) {
		answerVec.push_back(boardVec[i].num);
	}
	sort(answerVec.begin(), answerVec.end());

	for (int i = 0; i < answerVec.size();i++) {
		cout << answerVec[i] << " ";
	}

	return 0;
}