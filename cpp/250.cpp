//N과 M (10) https://www.acmicpc.net/problem/15664
#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int A[8], R[8];

void Find(int idx, int k)
{
    if(k==m)
    {
        for(int i=0; i<k; ++i)
        {
            cout << R[i] << ' ';
        }
        cout << '\n';
        return;
    }
    int pre = -1;
    for(int i=idx; i<n; ++i)
    {
        if(pre!=A[i])
        {
            R[k] = A[i];
            pre = A[i];
            Find(i+1, k+1);
        }
    }
}

int main()
{
    cin >> n >> m;

    for(int i=0; i<n; ++i)
    {
        cin >> A[i];
    }
    sort(A, A+n);
    Find(0, 0);
    return 0;
}