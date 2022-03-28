//N과 M (3) https://www.acmicpc.net/problem/15651
#include <iostream>
using namespace std;

int n, m;
int res[7];

void DFS(int idx)
{
    if(idx==m){
        for(int i=0; i<m; ++i)
            cout << res[i] << ' ';
        cout << '\n';
        return;
    }

    for(int i=1; i<=n; ++i){
        res[idx] = i;
        DFS(idx+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> n >> m;
    DFS(0);
    return 0;
}
