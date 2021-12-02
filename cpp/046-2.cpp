//1로 만들기 https://www.acmicpc.net/problem/1463 - Top-Down
#include <iostream>
using namespace std;
int num[1000001];

int Op(int n)
{
    if(n==1) return 0;
    if(num[n]>0) return num[n];
    else{
        num[n] = Op(n-1)+1;
        if(n%2==0) num[n] = min(Op(n/2)+1, num[n]);
        if(n%3==0) num[n] = min(Op(n/3)+1, num[n]);
        return num[n];
    }
    
}

int main()
{
    int n;
    cin >> n;
    cout << Op(n) << '\n';    
    return 0;
}