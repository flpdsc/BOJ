//사과 담기 게임 https://www.acmicpc.net/problem/2828
#include <iostream>
using namespace std;

int main()
{
    int n, m, j;
    cin >> n >> m >> j;
    int res=0, l=1, r=m;
    while(j--){
        int a;
        cin >> a;
        if(a<l){
            res += l-a;
            r = r-(l-a);
            l = a;
        }
        else if(a>r){
            res += a-r;
            l = l+(a-r);
            r = a;
        }
    }
    cout << res << '\n';
    return 0;
}