//LCS https://www.acmicpc.net/problem/9251
#include <iostream>
using namespace std;

int dp[1001][1001];

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    for(int i=1; i<=s2.size(); ++i)
    {
        for(int j=1; j<=s1.size(); ++j)
        {
            if(s2[i-1]==s1[j-1])
            {
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else
            {
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
        }
    }

    cout << dp[s2.size()][s1.size()] << '\n';

    return 0;
}