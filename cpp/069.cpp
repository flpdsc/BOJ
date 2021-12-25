//달팽이는 올라라고 싶다 https://www.acmicpc.net/problem/2869
#include <iostream>
using namespace std;
int main()
{
    int a, b, v, day;
    long long pos;
    cin >> a >> b >> v;
    day = v/(a-b)-a;
    if(a>=v) day = 1;
    else{
        if(day<0) day = 1;
        pos = (a-b)*day;
        while(1){
            day++;
            pos += a;
            if(pos>=v) break;
            pos -= b;
        }
    }
    cout << day << '\n';
    return 0;
}