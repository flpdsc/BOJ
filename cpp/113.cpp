//이동하기 https://www.acmicpc.net/problem/11048
#include <iostream>
using namespace std;

const int MAX = 1001;
int DP[MAX][MAX];

int main()
{
    int n, m;
    cin >> n >> m;
    for(int i=1; i<=n; ++i)
        for(int j=1; j<=m; ++j)
            cin >> DP[i][j];

    for(int i=2; i<=n; ++i)
        DP[i][1] += DP[i-1][1];
    for(int i=2; i<=m; ++i)
        DP[1][i] += DP[1][i-1];

    for(int i=2; i<=n; ++i){
        for(int j=2; j<=m; ++j){
            int tmp = max(DP[i-1][j], DP[i][j-1]);
            tmp = max(tmp, DP[i-1][j-1]);
            DP[i][j] += tmp;
        }
    }

    cout << DP[n][m] << '\n';
    return 0;
}