//스티커 https://www.acmicpc.net/problem/9465
#include <iostream>
using namespace std;

int DP[2][100000];

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        
        for(int i=0; i<2; ++i)
            for(int j=0; j<n; ++j)
                cin >> DP[i][j];

        DP[0][1] += DP[1][0];
        DP[1][1] += DP[0][0];

        for(int i=2; i<n; ++i)
        {
            DP[0][i] += max(DP[1][i-1], DP[1][i-2]);
            DP[1][i] += max(DP[0][i-1], DP[0][i-2]);
        }

        cout << max(DP[0][n-1], DP[1][n-1]) << '\n';

    }
    return 0;
}