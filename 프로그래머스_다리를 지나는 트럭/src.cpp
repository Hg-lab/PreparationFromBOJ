#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    queue<int> bridge;
    int sum = 0;
    int i = 0;
    
    while(1) {
        sum += truck_weights[i]; // 다리위에 올려도 되는지 sum
        
        if(sum <= weight && i < truck_weights.size()) { // 견디는 무게보다 작거나 같으면 올려도됨
            bridge.push(truck_weights[i]);
            // if(i < truck_weights.size()) 
            i++; // 다리에 올렸으니 다음 트럭
        } else { // 마지막에는 계속 안밀어줌
            if(sum > weight) sum -= truck_weights[i]; // 올렸을때 견디는 무게보다 커서 다시 뺌
            if(bridge.size() <= bridge_length && i < truck_weights.size()) bridge.push(0); // 0을 넣어서 앞으로 밀어주는 기능
        }
        
        if(bridge.size() > bridge_length||i == truck_weights.size()) {
            sum -= bridge.front();
            bridge.pop();
        }
        answer++;
        if(bridge.empty() == 1) {
            break;
        }
    }
    
    return answer;
}
int main() {
    cout << solution(100,100,{10}) << endl;
}