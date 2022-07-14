//N과 M (11) https://www.acmicpc.net/problem/15665
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int n, m;
vector<int> v;
map<int, bool> isVisited;
int res[7];

void Sol(int idx)
{
    if(idx==m)
    {
        for(int i=0; i<m; ++i)
        {
            cout << res[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i=0; i<v.size(); ++i)
    {
        res[idx] = v[i];
        Sol(idx+1);
    }
}

int main()
{
    cin >> n >> m;
    for(int i=0; i<n; ++i)
    {
        int tmp;
        cin >> tmp;
        if(!isVisited.count(tmp))
        {
            v.push_back(tmp);
            isVisited[tmp] = true;
        }
    }
    sort(v.begin(), v.end());
    Sol(0);
    return 0;
}