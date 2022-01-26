//다리 놓기 https://www.acmicpc.net/problem/1010
#include <iostream>
using namespace std;

int DP[31][31];

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;

        for(int i=1; i<=m; ++i)
            DP[1][i] = i;
        for(int i=2; i<=n; ++i)
            for(int j=2; j<=m; ++j)
                DP[i][j] = DP[i-1][j-1]+DP[i][j-1];
        
        cout << DP[n][m] << '\n';
    }
    return 0;
}