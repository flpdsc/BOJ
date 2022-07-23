//시리얼 번호 https://www.acmicpc.net/problem/1431
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


struct Guitar
{
    string sir;
    int len;
    int num;
    Guitar(string s, int l)
    {
        sir = s;
        len = l;
        num = 0;
        for(int i=0; i<l; ++i)
        {
            if(s[i]>'0' && s[i]<='9')
            {
                num += s[i]-'0';
            }
        }
    }
    bool operator<(const Guitar &b)const
    {
        if(len!=b.len) // A와 B의 길이가 다르면, 짧은 것이 먼저 온다.
        {
            return len<b.len;
        }
        else // 만약 서로 길이가 같다면, 
        {
            if(num!=b.num) // A의 모든 자리수의 합과 B의 모든 자리수의 합을 비교해서 작은 합을 가지는 것이 먼저온다. (숫자인 것만 더한다)
            {            
                return num<b.num;
            }
            return sir<b.sir; // 만약 1,2번 둘 조건으로도 비교할 수 없으면, 사전순으로 비교한다. 숫자가 알파벳보다 사전순으로 작다.
        }

    }
};

vector<Guitar> g;

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        string str;
        cin >> str;
        g.push_back(Guitar(str, str.size()));
    }
    sort(g.begin(), g.end());
    for(int i=0; i<n; ++i)
    {
        cout << g[i].sir << '\n';
    }
    return 0;
}