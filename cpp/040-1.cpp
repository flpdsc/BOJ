//DFS와 BFS https://www.acmicpc.net/problem/1260
#include <iostream>
#include <queue>
using namespace std;

int n, m, v;
bool map[1001][1001];
bool visited[1001];
queue<int> q;

void DFS(int vertex)
{
    visited[vertex] = true;
    cout << vertex << ' ';
    for(int i=1; i<=n; ++i){
        if(map[vertex][i] && !visited[i]) DFS(i);
    }
}

void BFS(int vertex)
{
    q.push(vertex);
    visited[vertex] = true;
    cout << vertex << ' ';
    while(!q.empty()){
        vertex = q.front();
        q.pop();
        for(int i=1; i<=n; ++i){
            if(map[vertex][i] && !visited[i]){
                q.push(i);
                visited[i] = true;
                cout << i << ' ';
            }
        }
    }
}

int main()
{
    cin >> n >> m >> v;

    for(int i=0; i<m; ++i){
        int a, b;
        cin >> a >> b;
        map[a][b] = true;
        map[b][a] = true;
    }

    DFS(v);
    cout << '\n';

    for(int i=1; i<=n; ++i) visited[i] = false;

    BFS(v);
    cout << '\n';

    return 0;
}
