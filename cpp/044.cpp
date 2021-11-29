//바이러스 https://www.acmicpc.net/problem/2606
#include <iostream>
#include <vector>
#include <queue>
#define MAX 100
using namespace std;

bool ch[MAX+1];

int main()
{
    int n, m, cnt=0;
    vector<int> graph[MAX+1];
    queue<int> Q;
    cin >> n >> m;
    for(int i=0; i<m; ++i){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    Q.push(1);
    ch[1] = true;
    while(!Q.empty()){
        int x = Q.front();
        Q.pop();
        for(int i=0; i<graph[x].size(); ++i){
            if(!ch[graph[x][i]]){
                ch[graph[x][i]] = true;
                Q.push(graph[x][i]);
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}
