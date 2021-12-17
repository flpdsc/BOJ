//가장 긴 증가하는 부분 수열 https://www.acmicpc.net/problem/11053
#include <iostream>
#define MAX 1000
using namespace std;

int arr[MAX], dp[MAX];

int main()
{
    int n, res=1;

    cin >> n;
    for(int i=0; i<n; ++i) cin >> arr[i];

    for(int i=0; i<n; ++i){
        dp[i] = 1;
        for(int j=0; j<i; ++j){
            if(arr[i]>arr[j]) dp[i] = max(dp[i], dp[j]+1);
        }
        res = max(res, dp[i]);
    }
    
    cout << res << '\n';

    return 0;
}
