//1로 만들기 https://www.acmicpc.net/problem/1463 - Bottom-Up
#include <iostream>
using namespace std;
int num[1000001];

int main()
{
    int n;
    num[2] = 1, num[3] = 1;  
    cin >> n;
    for(int i=4; i<=n; ++i){
        num[i] = num[i-1]+1;        
        if(i%2==0) num[i] = min(num[i/2]+1, num[i]);
        if(i%3==0) num[i] = min(num[i/3]+1, num[i]);
    }
    cout << num[n] << '\n';
    return 0;
}