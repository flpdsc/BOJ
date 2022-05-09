//N과 M (6) https://www.acmicpc.net/problem/15655
#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[8], res[9];

void Sol(int idx)
{
    if(idx==m)
    {
        for(int i=1; i<=m; ++i)
        {
            cout << res[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i=0; i<n; ++i)
    {
        if(res[idx]<arr[i])
        {
            res[idx+1] = arr[i];
            Sol(idx+1);
        }
    }
}

int main()
{
    cin >> n >> m;
    for(int i=0; i<n; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    Sol(0);
    return 0;
}
