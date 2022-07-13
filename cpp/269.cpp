//마인크래프트 https://www.acmicpc.net/problem/18111
#include <iostream>
using namespace std;

int map[500][500];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, m, b;
    cin >> n >> m >> b;
    
    pair<int, int> range=make_pair(2147000000, 0);
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            cin >> map[i][j];
            range.first = min(range.first, map[i][j]);
            range.second = max(range.second, map[i][j]);
        }
    }

    pair<int, int> res=make_pair(2147000000, 0);
    for(int h=range.first; h<=range.second; ++h)
    {
        int less=0, more=0;
        for(int i=0; i<n; ++i)
        {
            for(int j=0; j<m; ++j)
            {
                if(h<map[i][j])
                {
                    more += (map[i][j]-h);
                }
                else if(h>map[i][j])
                {
                    less += (h-map[i][j]);
                }
            }
        }
        if(less<=more+b)
        {
            if(res.first>=less+more*2)
            {
                res.first = less+more*2;
                res.second = h;
            }
        }
    }

    cout << res.first << ' ' << res.second << '\n';
    return 0;
}