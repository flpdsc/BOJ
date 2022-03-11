//소수 https://www.acmicpc.net/problem/2581
#include <iostream>
using namespace std;

int main()
{
    int m, n, sum=0, mp=2147000000;
    cin >> m >> n;

    for(int i=m; i<=n; ++i){
        bool flag = true;
        if(i==1) continue;
        for(int j=2; j*j<=i; ++j){
            if(i%j==0){
                flag = false;
                break;
            }
        }
        if(flag){
            sum += i;
            mp = min(mp, i);
        }
    }

    if(sum==0) cout << "-1\n";
    else cout << sum << '\n' << mp << '\n';
    return 0;
}