//점프 점프 https://www.acmicpc.net/problem/11060
#include <iostream>
#define SUP 2147000000
using namespace std;

int A[1000], DP[1000];

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> A[i];
        DP[i] = SUP;
    }

    DP[0] = 0;
    for(int i=0; i<n; ++i)
        for(int j=1; j<=A[i]; ++j)
            if(DP[i]!=SUP) DP[i+j] = min(DP[i+j], DP[i]+1);

    if(DP[n-1]==SUP) cout << "-1\n";
    else cout << DP[n-1] << '\n';
    return 0;
}