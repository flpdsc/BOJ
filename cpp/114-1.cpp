//트리의 부모 찾기 https://www.acmicpc.net/problem/11725
#include <iostream>
#include <vector>
using namespace std;

const int MAX = 100001;
vector<int> T[MAX];
int P[MAX];

void DFS(int p)
{
    for(int i=0; i<T[p].size(); ++i){
        int next = T[p][i];
        if(!P[next]){
            P[next] = p;
            DFS(next);
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

    P[1] = -1;
    DFS(1);

    for(int i=2; i<=n; ++i)
        cout << P[i] << '\n'; 
    return 0;
}