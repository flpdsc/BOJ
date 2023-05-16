//2차원 배열의 합 https://www.acmicpc.net/problem/2167
#include <iostream>
using namespace std;

long long arr[301][301];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=m; ++j)
        {
            int input;
            cin >> input;
            arr[i][j] = arr[i][j-1]+arr[i-1][j]-arr[i-1][j-1]+input;
        }
    }

    int k;
    cin >> k;
    for(int l=0; l<k; ++l)
    {
        int i, j, x, y;
        cin >> i >> j >> x >> y;
        cout << arr[x][y]-arr[i-1][y]-arr[x][j-1]+arr[i-1][j-1] << '\n';
    }
    return 0;
}