//주유소 https://www.acmicpc.net/problem/13305
#include <iostream>
using namespace std;

int st[99999], gs[100000];
int main()
{
    int n, best=1000000000;
    long long res=0;
    cin >> n;
    for(int i=0; i<n-1; ++i) cin >> st[i];
    for(int i=0; i<n; ++i) cin >> gs[i];

    for(int i=0; i<n; ++i){
        best = min(best, gs[i]);
        res += (long long)best*st[i];
    }
    cout << res << '\n';
    return 0;
}