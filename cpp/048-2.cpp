//정수 삼각형 https://www.acmicpc.net/problem/1932 - Top-Down
#include <iostream>
using namespace std;

int n, tree[501][501], dp[501][501];

int findMax(int l, int p)
{
    if(dp[l][p]>0) return dp[l][p]; 
    if(l==n) return tree[l][p];
    else return dp[l][p] = max(findMax(l+1, p), findMax(l+1, p+1))+tree[l][p];
}

int main()
{
    cin >> n;
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=i; ++j){
            cin >> tree[i][j];
        }
    }
    cout << findMax(1, 1) << '\n';
    return 0;
}
