//기타리스트 https://www.acmicpc.net/problem/1495
#include <iostream>
using namespace std;

int V[50];
bool DP[50][1001];

int main()
{
    int n, s, m;
    cin >> n >> s >> m;
    for(int i=0; i<n; ++i)
        cin >> V[i];

    if(s+V[0]<=m) DP[0][s+V[0]] = true;
    if(s-V[0]>=0) DP[0][s-V[0]] = true;

    for(int i=1; i<n; ++i){
        for(int j=0; j<=m; ++j){
            if(DP[i-1][j]){
                if(j-V[i]>=0) DP[i][j-V[i]] = true;
                if(j+V[i]<=m) DP[i][j+V[i]] = true;
            }
        }
    }

    for(int i=m; i>=0; --i){
        if(DP[n-1][i]){
            cout << i << '\n';
            return 0;
        }
    }
    cout << "-1\n";
    return 0;
}