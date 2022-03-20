//베르트랑 공준 https://www.acmicpc.net/problem/4948
#include <iostream>
using namespace std;

int Prime(int p)
{
    int cnt=0;
    if(p==1 || p==2) return 1;
    for(int i=p+1; i<=2*p; ++i){
        if(i%2!=0){
            bool flag = true;
            for(int j=3; j*j<=i; ++j){
                if(i%j==0){
                    flag = false;
                    break;
                }
            }
            if(flag) cnt++;
        }
    }
    return cnt;
}

int main()
{
    int n;
    while(1){
        cin >> n;
        if(n==0) break;
        cout << Prime(n) << '\n';
    }
    return 0;
}