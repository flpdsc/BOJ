//N과 M (2) https://www.acmicpc.net/problem/15650
#include <iostream>
using namespace std;

int n, m;
int res[8];
bool ch[9];

void DFS(int idx, int num)
{
    if(idx==m){
        for(int i=0; i<m; ++i)
            cout << res[i] << ' ';
        cout << '\n';
        return;
    }

    for(int i=num; i<=n; ++i){
        if(!ch[i]){
            ch[i] = true;
            res[idx] = i;
            DFS(idx+1, i+1);
            ch[i] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> n >> m;
    DFS(0, 1);
    return 0;
}