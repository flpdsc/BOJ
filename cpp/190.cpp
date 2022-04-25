//수들의 합 https://www.acmicpc.net/problem/1789
#include <iostream>
using namespace std;
int main()
{
    long long S, cnt=1;
    cin >> S;
    while(1)
    {
        if(S<=0) break;
        S -= cnt++;
    }
    if(S==0) cout << cnt-1 << '\n';
    else cout << cnt-2 << '\n';
    return 0;
}