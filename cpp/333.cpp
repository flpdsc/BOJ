//단어 공부 https://www.acmicpc.net/problem/1157
#include <iostream>
using namespace std;

int a[26];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str;
    int m=0;
    cin >> str;
    for(int i=0; i<str.length(); ++i)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            m = max(m, ++a[str[i]-'A']);
        }
        else
        {
            m = max(m, ++a[str[i]-'a']);
        }
    }
    char res = '\0';
    for(int i=0; i<26; ++i)
    {
        if(a[i]==m)
        {
            if(res=='\0')
            {
                res = i+'A';
            }
            else
            {
                res = '?';
                break;
            }
        }
    }
    cout << res << '\n';
    return 0;
}