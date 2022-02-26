//거스름돈 https://www.acmicpc.net/problem/14916
#include <iostream>
#define MAX 2147000000
using namespace std;

int dp[100001];

int main()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;

    for(int i=1; i<=n; ++i){
        if(i%2==0){
            dp[i] = i/2;
        }
        if(i%5==0){
            dp[i] = i/5;
        }
    }

    for(int i=7; i<=n; ++i){
        int a=MAX, b=MAX, pre;
        if(dp[i-5]!=-1) a = dp[i-5]+1;
        if(dp[i-2]!=-1) b = dp[i-2]+1;
        pre = min(a, b);
        if(pre!=MAX){
            if(dp[i]==-1) dp[i] = pre;
            else dp[i] = min(dp[i], pre);        
        }
    }

    cout << dp[n] << '\n';       
    return 0;
}