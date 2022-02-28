//1, 2, 3 더하기 3 https://www.acmicpc.net/problem/15988
#include <iostream>
#define MOD 1000000009
using namespace std;

int dp[1000001];

int main()
{
    int t, start=4;
    cin >> t;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    while(t--){
        int n;
        cin >> n;
        if(start<=n){
            for(int i=start; i<=n; ++i){
                dp[i] = (dp[i-1]+dp[i-2]+dp[i-3])%MOD;
            }
        }
        start = max(start, n);
        cout << dp[n] << '\n';
    }
    return 0;
}