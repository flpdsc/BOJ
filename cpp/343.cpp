//최소공배수 https://www.acmicpc.net/problem/13241
#include <iostream>
using namespace std;

long long GCD(long long x, long long y)
{
    if(y==0) return x;
    else return GCD(y, x%y);
}

long long LCM(long long x, long long y)
{
    return x * y / GCD(x, y);
}

int main()
{
    long long a, b;
    cin >> a >> b;
    cout << LCM(a, b) << '\n';
    return 0;
}