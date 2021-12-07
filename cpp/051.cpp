//토마토 https://www.acmicpc.net/problem/7576
#include <iostream>
#include <queue>
#define MAX 1000
using namespace std;

int m, n, res=0;
int box[MAX][MAX], day[MAX][MAX];
int dx[4]={0, 1, 0, -1}, dy[4]={-1, 0, 1, 0};
queue<pair<int, int> > Q;

int BFS()
{
    if(Q.empty()) return 0;
    while(!Q.empty()){
        int x = Q.front().first;
        int y = Q.front().second;
        Q.pop();
        for(int i=0; i<4; ++i){
            int xx = x+dx[i];
            int yy = y+dy[i];
            if(box[xx][yy]==0 && day[xx][yy]==-1 && xx>=0 && yy>=0 && xx<m && yy<n){
                Q.push(make_pair(xx, yy));
                day[xx][yy] = day[x][y]+1;
            }
        }
    }
    for(int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            if(box[i][j]==0 && day[i][j]==-1) return -1;
            res = max(res, day[i][j]);
        }
    }
    return res;
}

int main()
{
    cin >> m >> n;
    for(int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            cin >> box[i][j];
            day[i][j] = -1;
            if(box[i][j]==1){
                Q.push(make_pair(i, j));
                day[i][j] = 0;
            }
        }
    }
    cout << BFS() << '\n';
    return 0;
}