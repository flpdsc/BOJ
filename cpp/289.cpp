//Four Squares https://www.acmicpc.net/problem/17626
#include <iostream>
using namespace std;

int dp[50001];

int main()
{
    int n;
    cin >> n;
    for(int i=1; i*i<=n; ++i){
        dp[i*i] = 1;
    }

    for(int i=1; i<=n; ++i){
        if(dp[i]==0){
            for(int j=1; j*j<=i; ++j){
                if(dp[i]==0){
                    dp[i] = dp[j*j]+dp[i-j*j];
                }
                else{
                    dp[i] = min(dp[i], dp[j*j]+dp[i-j*j]);
                }
            }
        }
    }
    cout << dp[n] << '\n';
    return 0;
}