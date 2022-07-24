//병든 나이트 https://www.acmicpc.net/problem/1783
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    if(n==1)
    {
        cout << "1\n";
    }
    else if(n==2)
    {
        cout << min((m-1)/2+1, 4) << '\n';
    }
    else
    {
        if(m>6)
        {
            cout << m-2 << '\n';
        }
        else
        {
            cout << min(m, 4) << '\n';
        }
    }
    return 0;
}
