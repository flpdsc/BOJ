//상근이의 여행 https://www.acmicpc.net/problem/9372
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, m, a, b;
        cin >> n >> m;
        for(int i=0; i<m; ++i)
        {
            cin >> a >> b;
        }
        cout << n-1 << '\n';
    }

    return 0;
}