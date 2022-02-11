//연결 요소의 개수 https://www.acmicpc.net/problem/11724
#include <iostream>
using namespace std;

const int MAX = 1001;
int n, m;
bool graph[MAX][MAX], visited[MAX]; //인접행렬

void DFS(int ver)
{
    visited[ver] = true;
    for(int i=1; i<=n; ++i)
        if(graph[ver][i] && !visited[i])
            DFS(i);
}

int main()
{
    cin >> n >> m;
    for(int i=0; i<m; ++i){
        int u, v;
        cin >> u >> v;
        graph[u][v] = graph[v][u] = true;
    }

    int res=0;
    for(int i=1; i<=n; ++i){
        if(!visited[i]){
            DFS(i);
            res++;
        }
    }

    cout << res << '\n';
    return 0;
}