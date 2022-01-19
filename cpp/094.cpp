//뱀과 사다리 게임 https://www.acmicpc.net/problem/16928
#include <iostream>
#include <queue>
using namespace std;

int map[101];
int visited[101];

int main()
{
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n+m; ++i){
        int s, e;
        cin >> s >> e;
        map[s] = e;
    }

    queue<int> q;
    q.push(1);
    visited[1] = 1;
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        for(int i=1; i<=6; ++i){
            int xx = x+i;
            if(xx<=100){
                if(map[xx]!=0) xx = map[xx];
                if(visited[xx]==0){
                    visited[xx] = visited[x]+1;
                    q.push(xx);
                }
            }
        }
    }
    cout << visited[100]-1 << '\n';
    return 0;
}