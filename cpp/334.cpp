//팰린드롬수 https://www.acmicpc.net/problem/1259
#include <iostream>
using namespace std;
int main()
{
    while(1)
    {
        string s;
        bool f = true;
        cin >> s;
        if(s=="0") break;
        for(int i=0; i<s.size()/2; ++i)
        {
            if(s[i]!=s[s.size()-(i+1)])
            {
                f = false;
                break;
            }
        }
        if(f) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}