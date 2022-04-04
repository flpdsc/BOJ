//날짜 계산 https://www.acmicpc.net/problem/1476
#include <iostream>
using namespace std;
int main()
{
    int E, S, M, year=0;
    cin >> E >> S >> M;
    if(E==15) E=0;
    if(S==28) S=0;
    if(M==19) M=0;

    while(1){
        year++;
        if(E == year%15 && S == year%28 && M == year%19) break;
    }
    cout << year << '\n';
    return 0;
}