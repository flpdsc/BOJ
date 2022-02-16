//조합 https://www.acmicpc.net/problem/2407
#include <iostream>
#include <algorithm>
using namespace std;

string DP[101][101];

string Add(string a, string b)
{
    int sum=0;
    string result;
    
    while(!a.empty() || !b.empty() || sum)
    {
        if(!a.empty()){
            sum += a.back()-'0';
            a.pop_back();
        }
        if(!b.empty()){
            sum += b.back()-'0';
            b.pop_back();
        }
        result.push_back((sum%10)+'0');
        sum /= 10;
    }
    reverse(result.begin(), result.end()); //algorithm header
    return result;
}

int main()
{
    int n, m;
    cin >> n >> m;

    for(int i=1; i<=m; ++i)
        DP[i][0] = DP[i][i] = "1";
    for(int i=m+1; i<=n; ++i)
        DP[i][0] = "1";

    for(int i=2; i<=n; ++i)
        for(int j=1; j<=m; ++j)
            if(DP[i][j]=="\0")
                DP[i][j] = Add(DP[i-1][j-1], DP[i-1][j]);

    cout << DP[n][m] << '\n';
    return 0;
}