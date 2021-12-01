//피보나치 함수 https://www.acmicpc.net/problem/1003
#include <iostream>
using namespace std;

int f[41][2];

int main()
{
    int t, n;

    f[0][0] = 1, f[0][1] = 0;
    f[1][0] = 0, f[1][1] = 1;
    for(int i=2; i<=40; ++i){
        f[i][0] = f[i-2][0]+f[i-1][0];
        f[i][1] = f[i-2][1]+f[i-1][1];
    }
    cin >> t;
    for(int i=0; i<t; ++i){
        cin >> n;
        cout << f[n][0] << " " << f[n][1] << '\n';
    }
    return 0;
}