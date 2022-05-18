//적록색약 https://www.acmicpc.net/problem/10026
#include <iostream>
using namespace std;

int n;
string map[100];
bool visited[100][100];
int dr[4] = {0, 1, 0, -1}, dc[4] = {1, 0, -1, 0};

int DFS(int r, int c)
{
    visited[r][c] = true;
    for(int i=0; i<4; ++i)
    {
        int rr = r+dr[i];
        int cc = c+dc[i];

        if(rr>=0 && cc>=0 && rr<n && cc<n && !visited[rr][cc] && map[r][c]==map[rr][cc])
        {
            DFS(rr, cc);
        }
    }
    return 1;
}

int main()
{
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        cin >> map[i];
    }

    int cnt=0;
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            if(!visited[i][j])
            {
                cnt += DFS(i, j);
            }
        }
    }
    cout << cnt << ' ';

    fill(&visited[0][0], &visited[n-1][n], false);
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            if(map[i][j]=='G') map[i][j] = 'R';
        }
    }

    cnt = 0;
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            if(!visited[i][j])
            {
                cnt += DFS(i, j);
            }
        }
    }
    cout << cnt << '\n';


    return 0;
}