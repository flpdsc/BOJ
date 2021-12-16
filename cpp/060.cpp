//포도주 시식 https://www.acmicpc.net/problem/2156
#include <iostream>
#define MAX 10000
using namespace std;

int wine[MAX], dp[MAX];

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; ++i) cin >> wine[i];
    dp[0] = wine[0];
    dp[1] = wine[0]+wine[1];
    for(int i=2; i<n; ++i){
        dp[i] = max(dp[i-1], dp[i-2]+wine[i]);
        dp[i] = max(dp[i], dp[i-3]+wine[i-1]+wine[i]);
    }
    cout << dp[n-1] << '\n'; 
    return 0;
}