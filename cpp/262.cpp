//N번째 큰 수 https://www.acmicpc.net/problem/2693
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t, a[10];
    cin >> t;
    while(t--)
    {
        for(int i=0; i<10; ++i)
        {
            cin >> a[i];
        }
        sort(a, a+10);
        cout << a[7] << '\n';
    }
    return 0;
}