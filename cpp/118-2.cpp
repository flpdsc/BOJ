//연결 요소의 개수 https://www.acmicpc.net/problem/11724
#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1001;
int n, m;
vector<int> graph[MAX]; //인접리스트
bool visited[MAX];

void DFS(int ver)
{
    visited[ver] = true;
    for(int i=0; i<graph[ver].size(); ++i){
        int next = graph[ver][i];
        if(!visited[next])
            DFS(next);
    }
}

int main()
{
    cin >> n >> m;
    for(int i=0; i<m; ++i){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int res=0;
    for(int i=1; i<=n; ++i)
        if(!visited[i]){
            DFS(i);
            res++;
        }

    cout << res << '\n'; 
    return 0;
}