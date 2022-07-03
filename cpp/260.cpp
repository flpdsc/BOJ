//행렬 곱셈 https://www.acmicpc.net/problem/2740
#include <iostream>
using namespace std;

int A[100][100], B[100][100];

int main()
{
    int n, m, k;
    cin >> n >> m;
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            cin >> A[i][j];
        }
    }
    cin >> m >> k;
    for(int i=0; i<m; ++i)
    {
        for(int j=0; j<k; ++j)
        {
            cin >> B[i][j];
        }
    }
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<k; ++j)
        {
            int res=0;
            for(int l=0; l<m; ++l)
            {
                res += A[i][l]*B[l][j];
            }
            cout << res << ' ';
        }
        cout << '\n';
    }    
    return 0;
}