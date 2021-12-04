//계단 오르기 https://www.acmicpc.net/problem/2579 - Top-Down
#include <iostream>
using namespace std;

int score[301], res[301];

int findMax(int n)
{
    if(n==0) return res[0];
    if(n==1) return res[1] = score[1];
    if(n==2) return res[2] = score[1]+score[2];
    if(res[n]>0) return res[n];
    else return res[n] = max(findMax(n-2)+score[n], findMax(n-3)+score[n-1]+score[n]);
}

int main()
{
    int step;
    cin >> step;
    for(int i=1; i<=step; ++i) cin >> score[i];
    cout << findMax(step) << '\n';
    return 0;
}