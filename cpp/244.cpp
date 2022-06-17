//사탕 게임 https://www.acmicpc.net/problem/3085
#include <iostream>
#include <algorithm>
using namespace std;

int n, res=0;
string map[50];

void check(int r, int c, int rr, int cc)
{ 
    swap(map[r][c], map[rr][cc]);

    for(int j=0; j<n; ++j)
    {
        char c = map[0][j];
        int cnt=1;
        for(int i=1; i<n; ++i)
        {
            if(map[i][j]==c)
            {
                ++cnt;
            }
            else
            {
                cnt=1;
                c = map[i][j];
            }
            res = max(res, cnt);
        }
    }
    for(int i=0; i<n; ++i)
    {
        char c=map[i][0];
        int cnt=1;
        for(int j=1; j<n; ++j)
        {
            if(map[i][j]==c)
            {
                ++cnt;
            }
            else
            {
                cnt=1;
                c = map[i][j];
            }
            res = max(res, cnt);
        }
    }
    swap(map[r][c], map[rr][cc]);
}

int main()
{
    cin >> n;
    for(int i=0; i<n; ++i)
        cin >> map[i];

    for(int i=0; i<n; ++i)
        for(int j=0; j<n-1; ++j)
            check(i, j, i, j+1);

    for(int j=0; j<n; ++j)
        for(int i=0; i<n-1; ++i)
            check(i, j, i+1, j);

    cout << res << '\n';
    return 0;
}