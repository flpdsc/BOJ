//점수 계산 https://www.acmicpc.net/problem/2822
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int sum=0;
    pair<int, int> score[8];
    int s_score[5];

    for(int i=0; i<8; ++i)
    {
        cin >> score[i].first;
        score[i].second = i+1;
    }
    sort(score, score+8);
    
    for(int i=3; i<8; ++i)
    {
        sum += score[i].first;
        s_score[i-3] = score[i].second;
    }
    sort(s_score, s_score+5);

    cout << sum << '\n';
    for(int i=0; i<5; ++i)
    {
        cout << s_score[i] << ' ';
    }
    return 0;
}