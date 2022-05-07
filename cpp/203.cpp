//조합 0의 개수 https://www.acmicpc.net/problem/2004
//nCm = n!/((n-m)!*m!)
#include <iostream>

int Count(int a, int b)
{
    int res = 0;
    for(long long i=b; i<=a; i*=b)
    {
        res += a/i;
    }
    return res;
}

using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    
    int num2 = Count(n, 2) - Count(n-m, 2) - Count(m, 2);
    int num5 = Count(n, 5) - Count(n-m, 5) - Count(m, 5);
    
    cout << min(num2, num5) <<'\n';
    return 0;
}
