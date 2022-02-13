//동물원 https://www.acmicpc.net/problem/1309
#include <iostream>
using namespace std;

int DP[100001];

int main()
{
    int n;
    cin >> n;
    DP[1] = 3;
    DP[2] = 7;
    for(int i=3; i<=n; ++i)
        DP[i] = (2*DP[i-1]+DP[i-2])%9901;
    cout << DP[n]%9901 << '\n';
    return 0;
}