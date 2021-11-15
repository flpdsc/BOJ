//소수 구하기 https://www.acmicpc.net/problem/1929
#include <iostream>
using namespace std;

bool isPrime(int x)
{
    if(x<2) return false;
    for(int i=2; i*i<=x; ++i){
        if(x%i==0) return false; 
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int m, n;
    cin >> m >> n;
    for(int i=m; i<=n; ++i){
        if(isPrime(i)) cout << i << '\n';
    }
    return 0;
}