
#include <string>
#include <vector>
#include <queue>

using namespace std;

struct st { // first : 우선순위, second : 인덱스
  int first, second;  
};

bool operator<(st a, st b) {
    if(a.first != b.first) return a.first > b.first;
    else return a.second < b.second;
}

int solution(vector<int> priorities, int location) {
    int answer = 0;
    
    priority_queue<st> pq;
    pair<int, int> pri;
    
    for(int i = 0; i < priorities.size(); i++) {
        pri=make_pair(priorities[i], i);
        pq.push(pri);
    }
    
    return answer;
}




// #include <string>
// #include <vector>
// #include <queue>
// #include <iostream>

// using namespace std;

// int solution(vector<int> priorities, int location) {
//     int answer = 0;
//     queue<int> q;
//     int max = 0;
//     int maxIdx = 0;
//     vector<int> que;
//     bool ifKeep = true;
//     while(ifKeep) {
//         ifKeep=false;
//         for(int i = 0; i < priorities.size(); i++) {
//             if(max < priorities[i]) {
//                 max = priorities[i];
//                 maxIdx = i;
//                 if(i == location) {
//                     answer = i+1;
//                 }
//             }
//         }

//         for(int i = maxIdx; i < priorities.size(); i++) {
//             que.push_back(priorities[i]);
//             cout << priorities[i] << " ";
//         }
//         for(int i = 0; i < maxIdx; i++) {
//             que.push_back(priorities[i]);
//             cout << priorities[i] << " ";

//         }
//         cout << endl;
//         //검사
//         for(int i = 1; i < que.size(); i++) {
//             if(que[i-1] < que[i]) {
//                 ifKeep = true;
//             }
//         }
//     }
//     return answer;
// }

// int main () {
//     solution({2,1,3,2},2);
//     solution({1,1,9,1,1,1},0);
//     solution({1,2,3,2,4,7,9},0);
//     return 0;
// }