//동전 1 https://www.acmicpc.net/problem/2293
#include <iostream>
using namespace std;

int coin[100], dp[10001];

int main()
{
    int n, k;
    cin >> n >> k;
    for(int i=0; i<n; ++i) cin >> coin[i];
    dp[0] = 1;
    for(int i=0; i<n; ++i)
        for(int j=coin[i]; j<=k; ++j)
            dp[j] = dp[j]+dp[j-coin[i]]; 
    cout << dp[k] << '\n';
    return 0;
}

// [ ]  1   2   3   4   5   6   7   8   9   10
//
// [1]  1   1   1   1   1   1   1   1   1   1
// [2]  0   1   1   2   2   3   3   4   4   5
// [5]  0   0   0   0   1   1   2   2   3   4
//
// [=]  1   2   2   3   4   5   6   7   8   10