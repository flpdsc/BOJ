//숨바꼭질 https://www.acmicpc.net/problem/6118
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int Distance[20001];

int main()
{
    int n, m, res, dst=0, cnt=0;
    vector<int> graph[20001];

    cin >> n >> m;
    for(int i=0; i<m; ++i){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    queue<int> q;
    q.push(1);
    Distance[1] = 1;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int i=0; i<graph[cur].size(); ++i){
            int next = graph[cur][i];
            if(Distance[next]==0){
                Distance[next] = Distance[cur]+1;
                dst = max(dst, Distance[next]);
                q.push(next);
            }
        }
    }

    for(int i=n+1; i>0; --i){
        if(Distance[i]==dst){
            cnt++;
            res = i;
        }
    }

    cout << res << ' ' << dst-1 << ' ' << cnt << '\n';
    return 0;
}