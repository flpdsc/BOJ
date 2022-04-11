//막대기 https://www.acmicpc.net/problem/1094
#include <iostream>
using namespace std;

int main()
{
    int X, cnt=0;
    cin >> X;
    for(int i=64; i>=1; i/=2){
        if(X<i) continue; 
        cnt++;
        X -= i;
    }
    cout << cnt << '\n';
    return 0;
}