//용액 https://www.acmicpc.net/problem/2467
#include <iostream>
using namespace std;

int liq[100000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;
    for(int i=0; i<n; ++i)
        cin >> liq[i];

    int l=0, r=n-1;
    int left=0, right=n-1;
    int res = abs(liq[l]+liq[r]);

    while(l<r)
    {
        int dif = liq[l]+liq[r];
        if(abs(dif)<res)
        {
            res = abs(dif);
            left = l;
            right = r;
        }
        if(dif<0) ++l;
        else --r;
    }
    cout << liq[left] << ' ' << liq[right] << '\n';
    return 0;
}