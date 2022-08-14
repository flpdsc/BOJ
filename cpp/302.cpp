//개미 https://www.acmicpc.net/problem/10158
#include <iostream>
using namespace std;
int main()
{
    int w, h, p, q, t;
    cin >> w >> h >> p >> q >> t;
    
    int pt = t%(2*w);
    int qt = t%(2*h);
    bool dp=true, dq=true;

    while(pt--){
        if(dp) ++p;
        else --p;
        if(p==0 || p==w) dp = !dp;
    }

    while(qt--){
        if(dq) ++q;
        else --q;
        if(q==0 || q==h) dq = !dq;
    }

    cout << p << ' ' << q << '\n';
    return 0;
}