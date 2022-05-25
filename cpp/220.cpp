//최단경로 https://www.acmicpc.net/problem/1753
#include <iostream>
#include <vector>
#include <queue>
#define MAX 2147000000
using namespace std;

struct Edge
{
    int vertex, weight;
    Edge(int a, int b)
    {
        vertex = a;
        weight = b;
    }
    bool operator<(const Edge &b)const
    {
        return weight>b.weight;
    }

};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int V, E, K;
    cin >> V >> E >> K;
    
    vector<Edge> graph[V+1];
    priority_queue<Edge> pq;
    vector<int> res(V+1, MAX);

    for(int i=0; i<E; ++i)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back(Edge(v, w));
    }

    pq.push(Edge(K, 0));
    // res[K] = 0;

    while(!pq.empty())
    {
        Edge now = pq.top();
        pq.pop();

        if(now.weight<=res[now.vertex])
        {
            res[now.vertex] = now.weight;
            for(int i=0; i<graph[now.vertex].size(); ++i)
            {
                Edge next = graph[now.vertex][i];
                next.weight += now.weight;
                if(next.weight<res[next.vertex]) //현재 확인중인 가중치가 최소일 경우 
                {
                    res[next.vertex] = next.weight;
                    pq.push(next);
                }
            }
        }
    }

    for(int i=1; i<=V; ++i)
    {
        if(res[i]==MAX) cout << "INF\n";
        else cout << res[i] << '\n';
    }

    return 0;
}