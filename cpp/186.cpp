//N과 M (5) https://www.acmicpc.net/problem/15654
#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[8], ch[8], ans[8];

void Sol(int idx)
{
    if(idx==m)
    {
        for(int i=0; i<m; ++i)
        {
            cout << ans[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i=0; i<n; ++i)
    {
        if(!ch[i])
        {
            ch[i] = true;
            ans[idx] = arr[i];
            Sol(idx+1);
            ch[i] = false;
        }
    }
}

int main()
{
    cin >> n >> m;
    for(int i=0; i<n; ++i) cin >> arr[i];
    sort(arr, arr+n);
    Sol(0);
    return 0;
}