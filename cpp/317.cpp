//OX퀴즈 https://www.acmicpc.net/problem/8958
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int res=0, cnt=0;
        for(int i=0; i<str.size(); ++i)
        {
            if(str[i]=='O')
            {
                ++cnt;
                res += cnt;
            }
            else
            {
                cnt=0;
            }
        }
        cout << res << '\n';
    }
    return 0;
}
