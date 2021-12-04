//계단 오르기 https://www.acmicpc.net/problem/2579
#include <iostream>
using namespace std;

int stepScore[301], maxScore[301]; //점수 MAX=10000

int main()
{
    int step; // 계단개수 MAX=300 
    cin >> step;
    for(int i=1; i<=step; ++i) cin >> stepScore[i];

    maxScore[1] = stepScore[1];
    maxScore[2] = stepScore[1]+stepScore[2];
    maxScore[3] = max(stepScore[1]+stepScore[3], stepScore[2]+stepScore[3]);

    for(int i=4; i<=step; ++i)
        maxScore[i] = max(maxScore[i-2]+stepScore[i], maxScore[i-3]+stepScore[i-1]+stepScore[i]);

    cout << maxScore[step] << '\n';
    return 0;
}
