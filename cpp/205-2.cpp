//외판원 순회 2 https://www.acmicpc.net/problem/10971
#include <iostream>
#include <vector>
using namespace std;

int n, start, res=2147000000;
vector<pair<int, int> > graph[10];
bool isVisited[10];

void DFS(int ver, int cst, int cnt)
{
    if(n==cnt)
    {
        for(int i=0; i<graph[ver].size(); ++i)
        {
            if(graph[ver][i].first==start && graph[ver][i].second!=0)
                res = min(res, cst+graph[ver][i].second);
        }
        return;
    }
    for(int i=0; i<graph[ver].size(); ++i)
    {
        pair<int, int> next = graph[ver][i];
        if(!isVisited[next.first] && next.second!=0)
        {
            isVisited[next.first] = true;
            if(cst+next.second<res)
                DFS(next.first, cst+next.second, cnt+1);
            isVisited[next.first] = false;
        }
    }

}

int main()
{

    cin >> n;
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            int cost;
            cin >> cost;
            graph[i].push_back(make_pair(j, cost));
        }
    }
    for(int i=0; i<n; ++i)
    {
        start = i;
        isVisited[i] = true;
        DFS(i, 0, 1);
        isVisited[i] = false;
    }
    cout << res << '\n';
    return 0;
}