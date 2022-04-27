//나는야 포켓몬 마스터 이다솜 https://www.acmicpc.net/problem/1620
#include <iostream>
#include <map>
using namespace std;

string D1[100001];
map<string, int> D2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    for(int i=1; i<=n; ++i)
    {
        string str;
        cin >> str;
        D1[i] = str;
        D2.insert(make_pair(str, i));
    }

    for(int i=0; i<m; ++i)
    {
        string str;
        cin >> str;
        if(str[0]>='0' && str[0]<='9')
        {
            int idx = 0;
            for(int i=0; i<str.size(); ++i)
            {
                idx = idx*10 + str[i]-'0';
            }
            cout << D1[idx] << '\n';
        }
        else
        {
            cout << D2[str] << '\n';
        }
    }

    return 0;
}