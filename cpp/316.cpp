//색종이 - 2 https://www.acmicpc.net/problem/2567
#include <iostream>
#include <vector>
using namespace std;

bool map[102][102], chk[101][101];
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int findSide(int x, int y)
{
    int side=0;
    for(int i=0; i<4; ++i)
    {
        if(!map[x+dx[i]][y+dy[i]])
        {
            ++side;
        }
    }
    return side;
}

int main()
{
    int n;
    cin >> n;
    int ans=0;
    vector<pair<int, int> > p;
    while(n--)
    {
        int x, y;
        cin >> x >> y;
        p.push_back(make_pair(x, y));
        for(int i=1; i<=10; ++i)
        {
            for(int j=1; j<=10; ++j)
            {
                map[i+x][j+y] = true;
            }
        }
    }

    for(int idx=0; idx<p.size(); ++idx)
    {
        for(int i=1; i<=10; ++i)
        {
            for(int j=1; j<=10; ++j)
            {
                int xx = p[idx].first+i;
                int yy = p[idx].second+j;
                if(map[xx][yy] && !chk[xx][yy])
                {
                    ans += findSide(xx, yy);
                    chk[xx][yy] = true;
                }
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
