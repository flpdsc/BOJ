//타일 채우기 https://www.acmicpc.net/problem/2133
#include <iostream>
using namespace std;

int dp[16];

int Sol(int n)
{
    dp[0] = 1;
    dp[1] = 3;
    if(n==0 || n%2!=0) return 0;
    if(n==2) return dp[1];
    for(int i=2; i<=n/2; ++i)
    {
        dp[i] = dp[i-1]*4-dp[i-2];
    }
    return dp[n/2];
}

int main()
{
    int n;
    cin >> n;
    cout << Sol(n) << '\n';
    return 0;
}