//결혼식 https://www.acmicpc.net/problem/5567
#include <iostream>
using namespace std;

bool friends[501][501];

int main()
{
    int n, m;
    cin >> n >> m;
    for(int i=1; i<=m; ++i)
    {
        int a, b;
        cin >> a >> b;
        friends[a][b] = true;
        friends[b][a] = true;
    }

    for(int i=2; i<=n; ++i)
    {
        if(friends[1][i])
        {
            friends[i][i] = true;
            for(int j=2; j<=n; ++j)
            {
                if(friends[i][j])
                {
                    friends[j][j] = true;
                }
            }
        }
    }

    int res=0;
    for(int i=2; i<=n; ++i)
    {
        if(friends[i][i]) ++res;
    }

    cout << res << '\n';
    return 0;
}