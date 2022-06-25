//문서 검색 https://www.acmicpc.net/problem/1543
#include <iostream>
using namespace std;
int main()
{
    int res=0;
    string doc;
    getline(cin, doc);
    string search;
    getline(cin, search);

    if(doc.size()<search.size())
    {
        cout << res << '\n';
        return 0;
    }

    int i=0;
    while(i<=doc.size()-search.size())
    {
        if(doc[i]==search[0])
        {
            bool match=true;
            for(int j=1; j<search.size(); ++j)
            {
                if(doc[i+j]!=search[j])
                {
                    match = false;
                    break;
                }
            }
            if(match)
            {
                ++res;
                i += search.size();
                continue;
            }
        }
        ++i;
    }
    cout << res << '\n';
    return 0;
}