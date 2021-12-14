//연속합 https://www.acmicpc.net/problem/1912
#include <iostream>
using namespace std;

int dp[100000];

int main()
{
    int n, tmp, res=-2147000000;
    cin >> n;

    cin >> tmp;
    dp[0] = res = tmp;

    for(int i=1; i<n; ++i){
        cin >> tmp;
        res = max(res, dp[i-1]+tmp);
        dp[i] = max(dp[i-1]+tmp, tmp);
        res = max(res, dp[i]);
    }

    cout << res << '\n';

    return 0;
}