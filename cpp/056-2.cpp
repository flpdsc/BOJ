//2×n 타일링 https://www.acmicpc.net/problem/11726
#include <iostream>
using namespace std;

int main()
{
    int n, res;
    cin >> n;
    int d1 = 1, d2 = 2;
    for(int i=3; i<=n; ++i){
        res = d1+d2;
        d1 = d2%10007;
        d2 = res%10007;
    } 
    if(n==1||n==2) cout << n << '\n';
    else cout << res%10007 << '\n';
    return 0;
}
