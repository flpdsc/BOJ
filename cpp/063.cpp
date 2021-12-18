//동전 0 https://www.acmicpc.net/problem/11047
#include <iostream>
using namespace std;

int coin[10];

int main()
{
    int n, k, cnt=0;

    cin >> n >> k;
    for(int i=0; i<n; ++i) cin >> coin[i];

    for(int i=n-1; i>=0; --i){
        cnt += k/coin[i];
        k %= coin[i];
    }

    cout << cnt << '\n';

    return 0;
}
