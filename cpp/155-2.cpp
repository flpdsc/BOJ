//베르트랑 공준 https://www.acmicpc.net/problem/4948
#include <iostream>
using namespace std;

const int MAX = 123456*2; 

int main()
{
    bool P[MAX+1];
    fill_n(P, MAX+1, true);

    for(int i=2; i*i<=MAX; ++i){
        if(P[i]){
            for(int j=i*i; j<=MAX; j+=i){
                P[j] = false;
            }
        }
    }

    int n;
    while(1){
        cin >> n;
        if(n==0) break;
        int res=0;
        for(int i=n+1; i<=2*n; ++i){
            if(P[i]) res++;
        }
        cout << res << '\n';
    }
    return 0;
}