//암호해독기 https://www.acmicpc.net/problem/17176
#include <iostream>
using namespace std;

int c[53];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        int num;
        cin >> num;
        ++c[num];
    }

    string str;
    cin.ignore(); //입력버퍼 비우기
    getline(cin, str);
    
    for(int i=0; i<str.size(); ++i)
    {
        if(str[i]==' ')
        {
            if(--c[0]<0)
            {
                cout << "n\n";
                return 0;
            }
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            if(--c[str[i]-'A'+1]<0)
            {
                cout << "n\n";
                return 0;
            }
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            if(--c[str[i]-'a'+27]<0)
            {
                cout << "n\n";
                return 0;
            }
        }
    }
    cout << "y\n";
    return 0;
}