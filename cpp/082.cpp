//이항 계수 3 https://www.acmicpc.net/problem/11401
#include <iostream>
using namespace std;

long long a=1, b=1, tmp, mod=1000000007;

long long sol(int x)
{
    if(x==0) return 1;
    if(x%2==1) return b*sol(x-1)%mod;
    else{
        tmp = sol(x/2);
        return tmp*tmp%mod;
    }
}

int main()
{
    int n, k;
    cin >> n >> k;

    for(int i=n; i>=n-k+1; --i)
        a = (a*i)%mod;

    for(int i=1; i<=k; ++i)
        b = (b*i)%mod;
    b = sol(mod-2);
    
    cout << (a*b)%mod << '\n';
    return 0;
}