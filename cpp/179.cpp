//곱셈 https://www.acmicpc.net/problem/1629
#include <iostream>
using namespace std;
typedef long long ll;

ll a, b, c;

ll Pow(ll n, ll p)
{
    if(p==1) return n;
    if(p%2==0)
    {
        ll tmp = Pow(n, p/2);
        return tmp*tmp%c;
    }
    if(p%2!=0) return n*Pow(n, p-1)%c;
}

int main()
{
    cin >> a >> b >> c;
    cout << Pow(a, b) << '\n';
    return 0;
}