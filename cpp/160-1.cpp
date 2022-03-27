//N과 M (4) https://www.acmicpc.net/problem/15652
#include <iostream>
using namespace std;

int n, m;
int arr[9];

void DFS(int idx)
{
    if(idx>m){
        for(int i=1; i<=m; ++i){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i=1; i<=n; ++i){
        if(arr[idx-1]<=i) {
            arr[idx] = i;
            DFS(idx+1);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> n >> m;
    DFS(1);
    return 0;
}