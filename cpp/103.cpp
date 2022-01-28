//이친수 https://www.acmicpc.net/problem/2193
#include <iostream>
using namespace std;

long long pn[91];

int main()
{
    int n;
    cin >> n;
    
    pn[1] = 1;
    pn[2] = 1;

    for(int i=3; i<=n; ++i)
        pn[i] = pn[i-1]+pn[i-2];

    cout << pn[n] << '\n';
    return 0;
}