//효율적인 해킹 https://www.acmicpc.net/problem/1325
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

const int MAX = 10001;
vector<int> G[MAX];
int C[MAX];
bool visited[MAX];
int cnt;

void DFS(int x)
{
    visited[x] = true;
    for(int i=0; i<G[x].size(); ++i){
        int next = G[x][i];
        if(!visited[next]){
            visited[next] = true;
            DFS(next);
            cnt++;
        }
    } 
}

int main()
{
    int N, M, MAXI=0;
    cin >> N >> M;
    for(int i=0; i<M; ++i){
        int A, B;
        cin >> A >> B;
        G[B].push_back(A);
    }

    for(int i=1; i<=N; ++i){
        memset(visited, false, sizeof(visited));
        cnt=1;
        DFS(i);
        MAXI = max(cnt, MAXI);
        C[i] = cnt;
    }

    for(int i=1; i<=N; ++i)
        if(C[i]==MAXI) cout << i << ' ';
    cout << '\n';

    return 0;
}