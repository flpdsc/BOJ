//이항 계수 2 https://www.acmicpc.net/problem/11051
// C(n, k) = C(n-1, k-1) + C(n-1, k)
#include <iostream>
#define MOD 10007
using namespace std;

int DP[1001][1001];

int main()
{
    int n, k;
    cin >> n >> k;

    for(int i=1; i<=n; ++i)
        DP[i][0] = DP[i][i] = 1;

    for(int i=2; i<=n; ++i)
        for(int j=1; j<=k; ++j)
            if(DP[i][j]==0)
                DP[i][j] = (DP[i-1][j-1]+DP[i-1][j])%MOD;

    cout << DP[n][k] << '\n';
    return 0;
}