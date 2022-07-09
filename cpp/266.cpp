//올림픽 https://www.acmicpc.net/problem/8979
#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

struct Medal
{
    int country, gold, silver, bronze;
    Medal(int c, int g, int s, int b)
    {
        country = c;
        gold =g;
        silver = s;
        bronze = b;
    }
    bool operator<(const Medal &b)const
    {
        if(gold==b.gold)
        {
            if(silver==b.silver)
            {
                return bronze>b.bronze;
            }
            return silver>b.silver;
        }
        return gold>b.gold;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    int n, k, res;
    vector<Medal> m;
    cin >> n >> k;
    for(int i=0; i<n; ++i)
    {
        int c, g, s, b;
        cin >> c >> g >> s >> b;
        m.push_back(Medal(c, g, s, b));
    }
    sort(m.begin(), m.end());
    for(int i=0; i<n; ++i)
    {
        if(m[i].country==k)
        {
            res = i;
            while(m[res].gold==m[i].gold && m[res].silver==m[i].silver && m[res].bronze==m[i].bronze)
            {
                res--;
            }
            break;
        }
    }
    cout << res+2 << '\n';
    return 0;
}