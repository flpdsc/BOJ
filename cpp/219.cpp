//게임 https://www.acmicpc.net/problem/1072
#include <iostream>
#define MAX 1000000000
using namespace std;

long long x, y;

int Sol(int o)
{
    if(o>=99)
    {
        return -1;
    }

    int l=0, r=MAX;
    while(l<=r)
    {
        int m = (l+r)/2;
        int n = (y+m)*100/(x+m);
        if(o<n) r = m-1;
        else l=m+1;
    }
    return l;
}

int main()
{
    cin >> x >> y;
    int z = y*100/x;
    cout << Sol(z) << '\n';
    return 0;
}