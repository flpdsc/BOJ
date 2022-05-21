//이분 그래프 https://www.acmicpc.net/problem/1707
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int> > g;
vector<int> check;

void BFS(int ver)
{
    queue<int> q;
    int val = 1;
    check[ver] = val;
    q.push(ver);
    while(!q.empty())
    {
        int cur = q.front();
        q.pop();
        if(check[cur]==1)
        {
            val = 2;
        }
        else if(check[cur]==2)
        {
            val = 1;
        }
        for(int i=0; i<g[cur].size(); ++i)
        {
            int next = g[cur][i];
            if(check[next]==0)
            {
                check[next] = val;
                q.push(next);
            }
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
                BFS(i);
            }
        }

        cout << Result(v) << '\n';
    }
    return 0;
}