//제곱수의 합
#include <iostream>
using namespace std;

int a[100001];

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; ++i){
        a[i] = i;
        for(int j=1; j*j<=i; ++j)
            a[i] = min(a[i], a[i-j*j]+1);
    }
    cout << a[n] << '\n';    
    return 0;
}