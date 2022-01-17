//그림 https://www.acmicpc.net/problem/1926
#include <iostream>
#include <queue>
using namespace std;

const int MAX = 500;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
int n, m, cnt=0, res=0;
int map[MAX][MAX];

void BFS()
{
    queue<pair<int, int> > q;
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            if(map[i][j]==1){
                q.push(make_pair(i, j));
                map[i][j] = 0;
                int area = 1;
                while(!q.empty()){
                    int x = q.front().second;
                    int y = q.front().first;
                    q.pop();
                    for(int i=0; i<4; ++i){
                        int xx = x+dx[i];
                        int yy = y+dy[i];
                        if(xx>=0 && yy>=0 && xx<m && yy<n && map[yy][xx]==1){
                            map[yy][xx] = 0;
                            q.push(make_pair(yy, xx));
                            area++;
                        }
                    }
                }
                res = max(res, area);
                cnt++;



            }
        }
    }

}
int main()
{
    cin >> n >> m;
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j)
            cin >> map[i][j];
    }
    BFS();
    cout << cnt << '\n' << res << '\n';
    return 0;
}