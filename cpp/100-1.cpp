//유기농 배추 https://www.acmicpc.net/problem/1012
#include <iostream>
#include <queue>
using namespace std;

int n, m, k;
int map[50][50];
queue<pair<int, int> > cbg;
int dx[4]={1, 0, -1, 0}, dy[4]={0, 1, 0, -1};

int BFS()
{
    queue<pair<int, int> > q;
    int cnt=0;
    while(!cbg.empty())
    {
        if(map[cbg.front().first][cbg.front().second]!=0)
        {
            q.push(make_pair(cbg.front().first, cbg.front().second));
            map[cbg.front().first][cbg.front().second] = 0;
            cnt++;    
        }
        cbg.pop();
        while(!q.empty())
        {
            pair<int, int> cur;
            cur = q.front();
            q.pop();
            for(int i=0; i<4; ++i){
                int xx = cur.first+dx[i];
                int yy = cur.second+dy[i];
                if(xx>=0 && yy>=0 && xx<n && yy<m && map[xx][yy]!=0){
                    map[xx][yy] = 0;
                    q.push(make_pair(xx, yy));
                }
            }
        }
    }
    return cnt;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m >> k;
        for(int i=0; i<k; ++i){
            int x, y;
            cin >> x >> y;
            map[x][y] = 1;
            cbg.push(make_pair(x, y));
        }
        cout << BFS() << '\n';
    }
    return 0;
}
 