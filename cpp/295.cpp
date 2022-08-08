//타일 장식물 https://www.acmicpc.net/problem/13301
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n==1)
    {
        cout << 4 << '\n';
        return 0;
    }
    
    long long a=1, b=1;
    for(int i=3; i<=n; ++i)
    {
        if(a>b) b += a;
        else a += b;
    }
    if(a>b) cout << (4*a)+(2*b) << '\n';
    else cout << (4*b)+(2*a) << '\n';
    return 0;
}