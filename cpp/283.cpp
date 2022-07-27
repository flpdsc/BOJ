//게임을 만든 동준이 https://www.acmicpc.net/problem/2847
#include <iostream>
using namespace std;

int level[100];

int main()
{
    int n, res=0;
    cin >> n;
    for(int i=n-1; i>=0; --i) //역순으로 입력
    {
        cin >> level[i]; 
    }

    int pre = level[0];
    for(int i=1; i<n; ++i)
    {
        if(level[i]>=pre)
        {
            res += level[i];
            level[i] = pre-1;
            res -= level[i];
        }
        pre = level[i];
    }

    cout << res << '\n';

    return 0;
}