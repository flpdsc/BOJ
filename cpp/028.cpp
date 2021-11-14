//소수 찾기 https://www.acmicpc.net/problem/1978
#include <iostream>
using namespace std;

bool isPrime(int x)
{
    if(x==1) return false;
    for(int i=2; i<x; ++i){
        if(x%i == 0) return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, cnt=0;
    cin >> n;

    for(int i=0; i<n; ++i){
        int tmp;
        cin >> tmp;
        if(isPrime(tmp)) cnt++; 
    }

    cout << cnt << endl;
    return 0;
}