//카드 구매하기 https://www.acmicpc.net/problem/11052
#include <iostream>
using namespace std;

int c[1001], dp[1001];
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; ++i) cin >> c[i];

    for(int i=1; i<=n; ++i)
        for(int j=1; j<=i; ++j)
            dp[i] = max(dp[i], dp[i-j]+c[j]);

    cout << dp[n] << '\n';
    return 0;
}