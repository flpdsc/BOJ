//RGB거리 https://www.acmicpc.net/problem/1149 - Bottom-Up
#include <iostream>
using namespace std;

int map[1001][3], dp[1001][3];

int main()
{
    int n, res=2147000000;

    cin >> n;
    for(int i=1; i<=n; ++i){
        for(int j=0; j<3; ++j){
            cin >> map[i][j];
        }
    }

    for(int i=0; i<3; ++i) dp[1][i] = map[1][i];
    for(int i=2; i<=n; ++i){
        dp[i][0] = min(dp[i-1][1], dp[i-1][2])+map[i][0];
        dp[i][1] = min(dp[i-1][0], dp[i-1][2])+map[i][1];
        dp[i][2] = min(dp[i-1][0], dp[i-1][1])+map[i][2];
    }    

    for(int i=0; i<3; ++i) res = min(res, dp[n][i]);
    cout << res << '\n';

    return 0;
}