//케빈 베이컨의 6단계 법칙 https://www.acmicpc.net/problem/1389
#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1000000000;


int main()
{
    int n, m, res, tot=MAX;
    cin >> n >> m;

    vector<vector<int> > r(n+1, vector<int>(n+1, MAX));
    for(int i=1; i<=n; ++i) r[i][i] = 0;

    for(int i=0; i<m; ++i){
        int a, b;
        cin >> a >> b;
        r[a][b] = r[b][a] = 1;
    }

    for(int k=1; k<=n; ++k)
        for(int i=1; i<=n; ++i)
            for(int j=1; j<=n; ++j)
                r[i][j] = min(r[i][j], r[i][k]+r[k][j]);

    for(int i=1; i<=n; ++i){
        int sum=0;
        for(int j=1; j<=n; ++j)
            sum += r[i][j];
        if(tot > sum){
            tot = sum;
            res = i;
        }
    }
    cout << res << '\n';
    return 0;
}