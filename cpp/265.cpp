//BABBA https://www.acmicpc.net/problem/9625
#include <iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int a=1, b=0;
    while(k--)
    {
        int tmp=b;
        b += a;
        a = tmp;
    }
    cout << a << ' ' << b << '\n';
    return 0;
}