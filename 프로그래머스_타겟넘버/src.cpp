#include <string>
#include <vector>

using namespace std;
int main() {
    return 0;
}
int answer = 0;
void dfs(vector<int> numbers, int target, int node);

int solution(vector<int> numbers, int target) {
    dfs(numbers,target,0);
    return answer;
}

void dfs(vector<int> numbers, int target, int node) {
    if(node == numbers.size()) {
        int sum = 0;
        for(int i : numbers) {
            sum += i;
        }
        if(sum == target) answer++;
        return;        
    }
    numbers[node] *= 1;
    dfs(numbers,target,node+1); // node ++와 node +1의 차이?
    // ++node일 경우, 아래는 그 다음 depth로 들어가게된다
    numbers[node] *= -1;
    dfs(numbers,target,node+1);
}