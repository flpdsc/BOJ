//피보나치 함수 https://www.acmicpc.net/problem/1003 - Top-Down
#include <iostream>
using namespace std;
int dy[41][2];

int fibo(int n, int i)
{
    if(n==0 || n==1 || dy[n][i]>0) return dy[n][i];
    else return dy[n][i] = fibo(n-1, i)+fibo(n-2, i);    
}

int main()
{
    int t, n;
    dy[0][0] = 1, dy[0][1] = 0;
    dy[1][0] = 0, dy[1][1] = 1;
    cin >> t;
    for(int i=0; i<t; ++i){
        cin >> n;
        cout << fibo(n, 0) << " " << fibo(n, 1) << '\n';
    }
    return 0;
}