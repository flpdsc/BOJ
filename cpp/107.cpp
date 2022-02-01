//가장 큰 증가 부분 수열 https://www.acmicpc.net/problem/11055
#include <iostream>
using namespace std;

int A[1001], DP[1001];

int main()
{
    int n, res=0;
    cin >> n;
    for(int i=1; i<=n; ++i){
        cin >> A[i];
        DP[i] = A[i];
    }

    for(int i=1; i<=n; ++i){
        for(int j=1; j<i; ++j){
            if(A[j]<A[i] && DP[i]<DP[j]+A[i])
                DP[i] = DP[j]+A[i];
        }
        res = max(res, DP[i]);
    }
    cout << res << '\n';
    return 0;
}