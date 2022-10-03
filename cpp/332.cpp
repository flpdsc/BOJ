//부분 문자열 https://www.acmicpc.net/problem/6550
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string s, t;
    while(cin >> s >> t)
    {
        bool flag = true;
        if(s[0]=='\0') break;
        int k=0;
        for(int i=0; i<s.size(); ++i)
        {
            int j;
            for(j=k; j<t.size(); ++j)
            {
                if(s[i]==t[j])
                {
                    k=j+1;
                    break;
                }
            }
            if(j==t.size())
            {
                flag = false;
                break;
            }
        }
        if(flag) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}