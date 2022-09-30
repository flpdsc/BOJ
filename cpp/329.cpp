//진짜 메시지 https://www.acmicpc.net/problem/9324
#include <iostream>
using namespace std;

int a[26];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        fill_n(a, 26, 0);
        bool isFake = false;
        string str;
        cin >> str;
        str += "0";
        for(int i=0; i<str.length()-1; ++i)
        {
            ++a[str[i]-'A'];
            if(a[str[i]-'A']%3==0)
            {
                if(str[i]!=str[i+1])
                {
                    isFake = true;
                    break;
                }
                ++i;
            }
        }
        if(isFake) cout << "FAKE\n";
        else cout << "OK\n";
    }    
    return 0;
}