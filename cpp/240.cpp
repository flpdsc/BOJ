//문자열 https://www.acmicpc.net/problem/1120
#include <iostream>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int res = 2147000000;
    for(int i=0; i<=b.size()-a.size(); ++i)
    {
        int cnt = 0;
        for(int j=0; j<a.size(); ++j)
        {
            if(a[j]!=b[j+i])
            {
                cnt++;
            }
        }
        res = min(res, cnt);
    }
    cout << res << '\n';
    return 0;
}