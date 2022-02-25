//점프 https://www.acmicpc.net/problem/1890 (Bottom-Up)
#include <iostream>
using namespace std;

int MAP[100][100];
long long DP[100][100];

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; ++i)
        for(int j=0; j<n; ++j)
            cin >> MAP[i][j];
    DP[0][0] = 1;
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            if(DP[i][j]==0) continue;
            if(i==n-1 && j==n-1) break;
            if(i+MAP[i][j]<n) DP[i+MAP[i][j]][j] += DP[i][j];
            if(j+MAP[i][j]<n) DP[i][j+MAP[i][j]] += DP[i][j];
        }
    }
    cout << DP[n-1][n-1] << '\n';
    return 0;
}