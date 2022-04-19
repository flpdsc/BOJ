//좌표 압축 https://www.acmicpc.net/problem/18870
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int> > Cmpr, Rslt;

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        int raw;
        cin >> raw;
        Cmpr.push_back(make_pair(raw, i));
    }
    sort(Cmpr.begin(), Cmpr.end());

    int last=0;
    Rslt.push_back(make_pair(Cmpr[0].second, last));
    for(int i=1; i<n; ++i)
    {
        if(Cmpr[i-1].first==Cmpr[i].first)
        {
            Rslt.push_back(make_pair(Cmpr[i].second, last));
        }
        else
        {
            Rslt.push_back(make_pair(Cmpr[i].second, ++last));
        }

    }
    sort(Rslt.begin(), Rslt.end());

    for(int i=0; i<n; ++i)
    {
        cout << Rslt[i].second << ' ';
    }
    cout << '\n';

    return 0;
}