//최소공배수 https://www.acmicpc.net/problem/1934
#include <iostream>
using namespace std;

int GCD(int x, int y)
{
    if(y==0) return x;
    else return GCD(y, x%y); 
}

int LCM(int x, int y)
{
    return x * y / GCD(x, y);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        cout << LCM(a, b) << '\n';
    }    
    return 0;
}
