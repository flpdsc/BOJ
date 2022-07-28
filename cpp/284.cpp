//최대공약수 https://www.acmicpc.net/problem/1850
#include <iostream>
using namespace std;

int GCD(long long x, long long y)
{
    if(y==0) return x;
    else return GCD(y, x%y);
}

int main()
{
    long long a, b;
    cin >> a >> b;

    int n = GCD(a, b);

    while(n--)
    {
        cout << '1';
    }
    cout << '\n';
    return 0;
}