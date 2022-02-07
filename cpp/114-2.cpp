//트리의 부모 찾기 https://www.acmicpc.net/problem/11725
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAX = 100001;
vector<int> T[MAX];
int P[MAX];

void BFS(int p)
{
    P[1] = -1;
    queue<int> q;
    q.push(p);
    while(!q.empty()){
        p = q.front();
        q.pop();
        for(int i=0; i<T[p].size(); ++i){
            int next = T[p][i];
            if(!P[next]){
                P[next] = p;
                q.push(next);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n-1; ++i){   
        int a, b;
        cin >> a >> b;
        T[a].push_back(b);
        T[b].push_back(a);
    }

    BFS(1);

    for(int i=2; i<=n; ++i)
        cout << P[i] << '\n'; 
    return 0;
}