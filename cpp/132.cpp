//특정 거리의 도시 찾기 https://www.acmicpc.net/problem/18352
#include <iostream>
#include <vector>
#include <queue>
#define MAX 2147000000
using namespace std;

vector<int> graph[1000001];

int main()
{
    int n, m, k, x;
    cin >> n >> m >> k >> x;
    for(int i=0; i<m; ++i){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
    }

    vector<int> res(n+1, MAX);
    queue<pair<int, int> > pq;

    pq.push(make_pair(x, 0));
    res[x] = 0;

    while(!pq.empty())
    {
        int now = pq.front().first;
        int cst = pq.front().second;
        pq.pop();

        if(cst>res[now]) continue;

        for(int i=0; i<graph[now].size(); ++i){
            int next = graph[now][i];
            int nextDst = cst+1;
            if(res[next]>nextDst){
                res[next] = nextDst;
                pq.push(make_pair(next, nextDst));
            }
        }
    }
    
    bool flag = false;
    for(int i=1; i<=n; ++i){
        if(res[i]==k){
            cout << i << '\n';
            flag = true;
        }
    }
    if(!flag) cout << "-1\n";
    return 0;
}
