//오르막 수 https://www.acmicpc.net/problem/11057
#include <iostream>
#include <algorithm>
#define MOD 10007
using namespace std;

//  \  0   1   2   3   4   5   6   7   8   9
// [1] 1   1   1   1   1   1   1   1   1   1
// [2] 1   2   3   4   5   6   7   8   9   10
// [3] 1   3   6   10  15  21  28  36  45  55           
// [4] 1   4   10  20  35  56  ..

int DP[1000][10];

int main()
{
    int n, res=0;
    cin >> n;
    fill(&DP[0][0], &DP[n-1][10], 1);

    for(int i=1; i<n; ++i)
        for(int j=1; j<10; ++j)
            DP[i][j] = (DP[i-1][j]+DP[i][j-1])%MOD;

    for(int i=0; i<10; ++i)
        res = (res+DP[n-1][i])%MOD;

    cout << res << '\n';
    return 0;
}