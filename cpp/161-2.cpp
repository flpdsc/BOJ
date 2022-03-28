//N과 M (4) https://www.acmicpc.net/problem/15652
#include <iostream>
using namespace std;

int n, m;
int arr[8];

void DFS(int idx, int num)
{
    if(idx==m){
        for(int i=0; i<m; ++i){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i=num; i<=n; ++i){
        arr[idx] = i;
        DFS(idx+1, i);
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