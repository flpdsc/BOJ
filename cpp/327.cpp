//팰린드롬 https://www.acmicpc.net/problem/8892
#include <iostream>
using namespace std;

bool IsPalindrome(string s)
{
    int n = s.size()-1;
    for(int i=0; i<=n/2; ++i)
    {
        if(s[i]!=s[n-i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        bool flag=false;
        int k;
        cin >> k;
        string str[k];
        string tmp;
        for(int i=0; i<k; ++i)
        {
            cin >> str[i];
        }
        for(int i=0; i<k; ++i)
        {
            for(int j=0; j<k; ++j)
            {
                if(i!=j)
                {
                    tmp.erase();
                    tmp += (str[i]+str[j]);
                    if(IsPalindrome(tmp))
                    {
                        cout << tmp << '\n';
                        flag = true;
                        break;
                    }
                }
            }
            if(flag) break;
        }
        if(!flag) cout << "0\n";
    }
    return 0;
}