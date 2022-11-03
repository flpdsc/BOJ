//숫자의 합 https://www.acmicpc.net/problem/11720
#include <iostream>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    int res = 0;
    for(int i=0; i<n; ++i)
    {
        res += s[i]-'0';
    }
    cout << res << '\n';
    return 0;
}