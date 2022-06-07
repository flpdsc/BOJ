//링 https://www.acmicpc.net/problem/3036
#include <iostream>
using namespace std;

int Euclid(int x, int y)
{
    if(y==0) return x;
    return Euclid(y, x%y);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, first;
    cin >> n >> first;
    for(int i=1; i<n; ++i)
    {
        int ring;
        cin >> ring;
        int m = Euclid(first, ring);
        cout << first/m << '/' << ring/m << '\n';
    }

    return 0;
}