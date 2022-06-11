//수 이어 쓰기 1 https://www.acmicpc.net/problem/1748
#include <iostream>
using namespace std;
int main()
{
    int n, res=0;
    cin >> n;
    for(int i=1; i<=n; i*=10)
        res += n-i+1;
    cout << res << '\n';
    return 0;
}