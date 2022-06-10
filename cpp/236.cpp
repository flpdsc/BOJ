//토너먼트 https://www.acmicpc.net/problem/1057
#include <iostream>
using namespace std;
int main()
{
    int n, k, l;
    cin >> n >> k >> l;
    k--;
    l--;
    int cnt=0;
    while(1)
    {
        if(k==l)
        {
            cout << cnt << '\n';
            break;
        }
        k /= 2;
        l /= 2;
        cnt++;
    }
    return 0;
}
