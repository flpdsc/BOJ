//상자넣기 https://www.acmicpc.net/problem/1965
#include <iostream>
using namespace std;

int BOX[1001], DP[1001];

int main()
{
    int n, res=0;
    cin >> n;
    for(int i=1; i<=n; ++i)
        cin >> BOX[i];
    
    for(int i=n-1; i>0; --i){
        for(int j=1; j<=n-i; ++j){
            if(BOX[i]<BOX[i+j])
                DP[i] = max(DP[i], DP[i+j]+1);
        }
        res = max(res, DP[i]);
    }

    cout << res+1 << '\n';
    return 0;
}