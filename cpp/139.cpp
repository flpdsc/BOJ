//한수 https://www.acmicpc.net/problem/1065
#include <iostream>
using namespace std;

bool ch(int num){
    if(num<100) return true;
    int a, aa, aaa;
    a = num%10;
    aa = num%100/10;
    aaa = num/100;
    if(a-aa == aa-aaa)
        return true;
    return false;
}

int main()
{
    int n, res=0;
    cin >> n;
    for(int i=1; i<=n; ++i)
        if(ch(i)) res++;
    cout << res << '\n';
    return 0;
}