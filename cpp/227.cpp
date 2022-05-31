//분수 합 https://www.acmicpc.net/problem/1735
#include <iostream>
using namespace std;

int Euclid(int x, int y)
{
    if(y==0) return x;
    return Euclid(y, x%y);
}

int main()
{
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    int a, b, m;
    a = (a1*b2)+(a2*b1);
    b = b1*b2;
    m = Euclid(a, b);
    cout << a/m << ' ' << b/m << '\n';
    return 0;
}