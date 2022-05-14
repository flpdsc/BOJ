//내리막 길 https://www.acmicpc.net/problem/1520
#include <iostream>
using namespace std;

int n, m;
int map[500][500], DP[500][500];
int dr[4] = {1, 0, -1, 0}, dc[4] = {0, 1, 0, -1};

int DFS(int r, int c)
{
    if(r==n-1 && c==m-1)
    {
        return 1;
    }
    if(DP[r][c]!= -1)
    {
        return DP[r][c];
    }

    DP[r][c] = 0;
    for(int i=0; i<4; ++i)
    {
        int rr = r+dr[i];
        int cc = c+dc[i];
        if(rr>=0 && cc>=0 && rr<n && cc<m && map[rr][cc]<map[r][c])
        {
            DP[r][c] += DFS(rr, cc);
        }
    }
    return DP[r][c];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    cin >> n >> m;
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            cin >> map[i][j];
            DP[i][j] = -1;
        }
    }
    cout << DFS(0, 0) << '\n';
    return 0;
}