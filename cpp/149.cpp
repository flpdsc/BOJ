//N과 M (1) https://www.acmicpc.net/problem/15649
#include <iostream>
using namespace std;

int n, m;
int res[8];
bool ch[9];

void dfs(int idx)
{
    if(idx==m){
        for(int i=0; i<m; ++i){
            cout << res[i] << ' ';
        }
        puts("");
        return;

    }
    for(int i=1; i<=n; ++i){
        if(!ch[i]){
            ch[i] = true;
            res[idx] = i;
            dfs(idx+1);
            ch[i] = false;
        }
    }
}

int main()
{
    cin >> n >> m;
    dfs(0);
    return 0;
}