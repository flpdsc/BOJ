//구간 합 구하기 5 https://www.acmicpc.net/problem/11660
#include <iostream>
using namespace std;

long long dp[1025][1025];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=n; ++j){
            cin >> dp[i][j]; 
            dp[i][j] += dp[i][j-1]+dp[i-1][j]-dp[i-1][j-1];
        }
    }

    while(m--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        --x1, --y1;
        cout << dp[x2][y2] - dp[x2][y1] - dp[x1][y2] + dp[x1][y1] << '\n';
    }
    return 0;
}