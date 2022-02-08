//파도반 수열 https://www.acmicpc.net/problem/9461
#include <iostream>
using namespace std;

long long P[101];

int main()
{
    P[1] = P[2] = P[3] = 1;
    P[4] = P[5] = 2;

    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        if(P[N]==0)
            for(int i=6; i<=N; ++i)
                P[i] = P[i-1]+P[i-5];
        cout << P[N] << '\n';
    }
    return 0;
}