//01타일 https://www.acmicpc.net/problem/1904
#include <iostream>
using namespace std;

int a[1000001];
int main()
{
    int n;
    cin >> n;
    a[1] = 1;
    a[2] = 2;
    for(int i=3; i<=n; ++i)
        a[i] = (a[i-1]+a[i-2])%15746;
    cout << a[n] << '\n';
    return 0;
}
