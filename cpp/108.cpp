//가장 긴 감소하는 부분 수열 https://www.acmicpc.net/problem/11722
#include <iostream>
using namespace std;

int A[1000], DP[1000];

int main()
{
    int n, res=0;
    cin >> n;
    for(int i=0; i<n; ++i)
        cin >> A[i];

    for(int i=0; i<n; ++i){
        for(int j=0; j<i; ++j)
            if(A[i]<A[j] && DP[j]+1>DP[i])
                DP[i] = DP[j]+1;
        res = max(res, DP[i]);
    }
    cout << res+1 << '\n';
    return 0;
}