#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;
const int kugi = 1001;
int checked[kugi] = { 0, };
vector<int> arr[1001];

void dfs(int start);
void bfs(int start);

int main()
{
    int n = 0; // 노드개수
    int m = 0; // 루프개수
    int start = 0; // 시작점
    
    cin >> n >> m >> start;
    for (int i = 0; i < m; i++) {
        int a, b = 0; // 연결
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    
    for (int i = 0; i < n; i++) sort(arr[i].begin(), arr[i].end() );

     dfs(start);
    cout << '\n';

    for (int i = 0; i < kugi; i++) checked[i] = 0;
    bfs(start);

    return 0;
}

void dfs(int start) {
    if (checked[start] == 1) return;
    checked[start] = true;
    cout << start << ' ';
    for (int i = 0; i < arr[start].size(); i++) {
        int next = arr[start][i];
        dfs(next);

    }
}

void bfs(int start) {
    queue<int> q;
    q.push(start);
    checked[start] = true;
    while (!q.empty()) {
        int next = q.front();
        q.pop();
        cout << next << ' ';

        for (int i = 0; i < arr[next].size(); i++) {
            int y = arr[next][i];
                if (!checked[y]) {
                    q.push(y);
                    checked[y] = true;
                }
            }
    }
}