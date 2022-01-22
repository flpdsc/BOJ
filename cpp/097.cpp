//점프왕 쩰리 https://www.acmicpc.net/problem/16173
#include <iostream>
#include <queue>
using namespace std;

int map[3][3];
bool visited[3][3];
int dx[2] = {1, 0}, dy[2]={0, 1};

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; ++i)
        for(int j=0; j<n; ++j)
            cin >> map[i][j];

    queue<pair<int, int> > q;
    q.push(make_pair(0, 0));
    visited[0][0] = true;
    while(!q.empty())
    {
        pair<int, int> cur = q.front();
        int p = map[cur.first][cur.second];
        q.pop();
        if(p==-1) break;
        for(int i=0; i<2; ++i){
            int xx = cur.second+dx[i]*p;
            int yy = cur.first+dy[i]*p;
            if(xx<n && yy<n && !visited[yy][xx]){
                q.push(make_pair(yy, xx));
                visited[yy][xx] = true;
            }
        }
    }
    
    if(visited[n-1][n-1]) cout << "HaruHaru\n";
    else cout << "Hing\n";
    return 0;
}