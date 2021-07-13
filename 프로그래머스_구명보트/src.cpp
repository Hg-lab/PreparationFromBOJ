#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int cmp(int a, int b) {
    return a < b;
}

int solution(vector<int> people, int limit) {
    int answer = 0;
    int sum = 0;
    int k = people.size() - 1;
    int stop = 0;
    sort(people.begin(), people.end(), cmp);
    while(stop < k){
        sum += people[k];
        for(int i = stop; i < people.size(); i++) {
            sum += people[i];
            if(sum > limit) {
                sum -= people[i];
                answer++;
                stop = i;
                sum = 0;
                break;
            } else {
                continue;
            }
        }
        k--;
    }
    return answer;
}

int main() {
    cout << solution({70,50,80,50}, 100) << endl;

}