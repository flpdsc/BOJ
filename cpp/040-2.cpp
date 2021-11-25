//DFS와 BFS https://www.acmicpc.net/problem/1260 - 인접리스트
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> graph[1001];
bool visited[1001];

void DFS(int ver)
{
    visited[ver] = true;
    cout << ver << ' ';
    for(int i=0; i<graph[ver].size(); ++i){
        int next = graph[ver][i];
        if(!visited[next]) DFS(next);
    }
}

void BFS(int ver)
{
    queue<int> q;
    q.push(ver);
    visited[ver] = true;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        cout << cur << ' ';
        for(int i=0; i<graph[cur].size(); ++i){
            int next = graph[cur][i];
            if(!visited[next]){
                q.push(next);
                visited[next] = true;
            }
        }
    }
}

int main()
{
    int n, m, v;
    cin >> n >> m >> v;
    for(int i=0; i<m; ++i){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    //방문할 수 있는 정점이 여러 개인 경우에는 정점 번호가 작은 것을 먼저 방문
    for(int i=1; i<=n; ++i) sort(graph[i].begin(), graph[i].end());

    DFS(v);
    cout << '\n';
    
    for(int i=1; i<=n; ++i) visited[i] = false;

    BFS(v);
    cout << '\n';

    return 0;
}
