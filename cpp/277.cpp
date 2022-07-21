//행렬 https://www.acmicpc.net/problem/1080
#include <iostream>
using namespace std;

string A[50], B[50];
bool Mat[50][50];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
 
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; ++i) cin >> A[i];
    for(int i=0; i<n; ++i) cin >> B[i];

    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            if(A[i][j]==B[i][j]) Mat[i][j] = true;
            else Mat[i][j] = false;
        }
    }

    int res=0;
    if(n>=3 && m>=3)
    {
        for(int i=0; i<=n-3; ++i)
        {
            for(int j=0; j<=m-3; ++j)
            {
                if(!Mat[i][j])
                {
                    for(int ii=i; ii<i+3; ++ii)
                    {
                        for(int jj=j; jj<j+3; ++jj)
                        {
                            Mat[ii][jj] = !Mat[ii][jj];
                        }
                    }
                    ++res;
                }
            }
        }
    }

    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            if(!Mat[i][j])
            {
                cout << "-1\n";
                return 0;
            }
        }
    }
    cout << res << '\n';
    return 0;
}