//1로 만들기 2 https://www.acmicpc.net/problem/12852
#include <iostream>
using namespace std;

const int MAX = 2147000000;
int g[1000001][2];

int main()
{
    int n;
    cin >> n;

    for(int i=2; i<=n; ++i)
    {
        int s[3] = {MAX, MAX, MAX};

        s[0] = g[i-1][1];
        if(i%3==0) s[1] = g[i/3][1];
        if(i%2==0) s[2] = g[i/2][1];

        if(s[0]<=s[1] && s[0]<=s[2])
        {
            g[i][0] = i-1;
            g[i][1] = g[i-1][1]+1;
        }
        else if(s[1]<=s[0] && s[1]<=s[2])
        {
            g[i][0] = i/3;
            g[i][1] = g[i/3][1]+1;
        }
        else if(s[2]<=s[0] && s[2]<=s[1])
        {
            g[i][0] = i/2;
            g[i][1] = g[i/2][1]+1;
        }
    }

    cout << g[n][1] << '\n';

    while(n>0)
    {
        cout << n << ' ';
        n = g[n][0];
    }
    cout << '\n';
    return 0;
}

// 1 0
// 2 1 (2->1)
// 3 1 (3->1)
// 4 2 (4->3->1, 4->2->1)
// 5 3 (5->4->3->1, 5->4->2->1)
// 6 2 (6->3->1, 6->2->1)
// 7 4 (7->6->3->1, 7->6->2->1)
// 8 3 (8->4->3->1, 8->4->2->1)
// 9 2 (9->3->1)