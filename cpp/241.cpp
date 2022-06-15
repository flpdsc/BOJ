//키로거 https://www.acmicpc.net/problem/5397
#include <iostream>
#include <list>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        string str;
        list<char> l;
        cin >> str;
        list<char>::iterator it=l.begin();
        for(int i=0; i<str.size(); ++i)
        {
            if(str[i]=='<')
            {
                if(it!=l.begin()) --it;  
            }
            else if(str[i]=='>')
            {
                if(it!=l.end()) ++it;
            }
            else if(str[i]=='-')
            {
                if(it!=l.begin())
                {
                    auto del = it;
                    l.erase(--it);
                }
            }
            else
            {
                l.insert(it, str[i]);
            }
        }
        for(auto i:l)
            cout << i;
        cout << '\n';
    }
    return 0;
}