//2×n 타일링 2 https://www.acmicpc.net/problem/11727
#include <iostream>
using namespace std;

int dp[1001];

int main()
{
    int n;
    cin >> n;
    dp[1] = 1;
    dp[2] = 3;
    for(int i=3; i<=n; ++i) dp[i] = (dp[i-1]+dp[i-2]*2)%10007;
    cout << dp[n] << '\n';
    return 0;
}