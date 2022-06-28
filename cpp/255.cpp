//숫자 정사각형 acmicpc.net/problem/1051
#include <iostream>
using namespace std;
int main()
{
    int n, m, res=1;
    string map[50];

    cin >> n >> m;
    for(int i=0; i<n; ++i)
    {
        cin >> map[i];
    }

    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m-1; ++j)
        {
            for(int k=j+1; k<m; ++k)
            {
                int len = k-j;
                int ver = map[i][j];
                if(n>=i+len)
                {
                    if(map[i][k]==ver && map[i+len][j]==ver && map[i+len][k]==ver)
                    {
                        res = max(res, len+1);
                    }
                }
            }
        }
    }
    
    cout << res*res << '\n';
    return 0;
}