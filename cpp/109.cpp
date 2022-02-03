//쉬운 계단 수 https://www.acmicpc.net/problem/10844
#include <iostream>
#define MOD 1000000000
using namespace std;

long long DP[101][10];

int main()
{
    int n;
    long long res=0;
    cin >> n;

    for(int i=1; i<10; ++i){
        DP[1][i] = 1;
    }

    for(int i=2; i<=n; ++i){
        for(int j=1; j<9; j++){
            DP[i][j] = (DP[i-1][j-1]+DP[i-1][j+1])%MOD;
        }
        DP[i][0] = DP[i-1][1]%MOD;
        DP[i][9] = DP[i-1][8]%MOD;
    }

    for(int i=0; i<=9; ++i){
        res += DP[n][i]%MOD;
    }

    cout << res%MOD << '\n';
    return 0;
}