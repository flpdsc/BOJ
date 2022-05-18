//캠핑 https://www.acmicpc.net/problem/4796
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    int l, p, v, cnt=0;

    while(++cnt)
    {
        cin >> l >> p >> v;
        if(l==0 && p==0 && v==0) break;
        cout << "Case " << cnt << ": " << l*(v/p) + min(l, v%p) << '\n';
    }

    return 0;
}