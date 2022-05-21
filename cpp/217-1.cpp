//이분 그래프 https://www.acmicpc.net/problem/1707
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > g;
vector<int> check;

void DFS(int ver)
{
    if(check[ver]==0)
    {
        check[ver] = 1;
    }
    for(int i=0; i<g[ver].size(); ++i)
    {
        int next = g[ver][i];
        if(check[next]==0)
        {
            if(check[ver]==1)
            {
                check[next] = 2;
            }
            else if(check[ver]==2)
            {
                check[next] = 1;
            }
            DFS(next);
        }
    }
}

string Result(int ver)
{
    for(int i=1; i<=ver; ++i)
    {
        for(int j=0; j<g[i].size(); ++j)
        {
            if(check[i]==check[g[i][j]])
            {
                return "NO";
            }
        }
    }
    return "YES";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    int k;
    cin >> k;
    while(k--)
    {
        int v, e;
        cin >> v >> e;
        g.assign(v+1, vector<int>(0, 0));
        check.assign(v+1, 0);
        for(int i=0; i<e; ++i)
        {
            int a, b;
            cin >> a >> b;
            g[a].push_back(b);
            g[b].push_back(a);
        }

        for(int i=1; i<=v; ++i)
        {
            if(check[i]==0)
            {
                DFS(i);
            }
        }

        cout << Result(v) << '\n';
    }
    return 0;
}