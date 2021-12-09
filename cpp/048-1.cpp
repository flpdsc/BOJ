//정수 삼각형 https://www.acmicpc.net/problem/1932
#include <iostream>
using namespace std;

int tree[501][501], dp[501][501];

int main()
{
    int n, res=-2147000000;
    cin >> n;
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=i; ++j){
            cin >> tree[i][j];
        }
    }

    dp[1][1] = tree[1][1];

    for(int i=2; i<=n; ++i){
        for(int j=1; j<=i; ++j){
            dp[i][j] = max(dp[i-1][j-1], dp[i-1][j])+tree[i][j];
        }
    }

    for(int i=1; i<=n; ++i) res = max(res, dp[n][i]);

    cout << res << '\n';

    return 0;
}