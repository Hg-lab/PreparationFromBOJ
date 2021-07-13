#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    bool ifExists = 1;
    queue<int> q;
    int start = 0;
    
    //다했는지 검사
    while(ifExists) {
    for(int i = 0; i < progresses.size(); i++) {
        if(progresses[i] < 100) {
            ifExists = 1;
            start = i;
            break;
        }
        if(i == progresses.size() -1 && progresses[i] >= 100){
            ifExists = 0;
            break;
        }
    }
    if(ifExists == 0) break;
    
    //안한곳부터 시작
    for(int i = start; i < progresses.size(); i++) {
        if(progresses[i] < 100) progresses[i] += speeds[i];
    }

    //배포
    for(int i = start; i < progresses.size(); i++) {
        if(progresses[i] >= 100) {
            if(i == start) {
                answer.push_back(1);
            } else{
                answer.back() += 1;
            } 
        } else break;
    }
    }

    return answer;
}

int main() {
    vector<int> progresses = {93,30,55};
    vector<int> speeds = {4, 30, 5};
    vector<int> answer = solution(progresses, speeds);

    for(int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }
    
    return 0;
}
