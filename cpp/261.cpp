//두 수의 합 https://www.acmicpc.net/problem/3273
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, x, res=0;
    cin >> n;
    vector<int> a(n, 0);
    for(int i=0; i<n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cin >> x;
    
    int lp=0, rp=n-1;
    while(lp<rp)
    {
        int cmp = x-a[lp];
        if(a[rp]==cmp)
        {
            ++res;
            --rp;
            ++lp;
        }
        else if(a[rp]>cmp)
        {
            --rp;
        }
        else if(a[rp]<cmp)
        {
            ++lp;
        }
    }
    cout << res << '\n';
    return 0;
}