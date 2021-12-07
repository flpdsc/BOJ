//토마토 https://www.acmicpc.net/problem/7576
#include <iostream>
#include <queue>
#define MAX 1000
using namespace std;

int m, n, res=0;
int box[MAX][MAX];
int dx[4]={0, 1, 0, -1}, dy[4]={-1, 0, 1, 0};
queue<pair<int, int> > Q;

int BFS()
{
    while(!Q.empty()){
        int x = Q.front().first;
        int y = Q.front().second;
        Q.pop();
        for(int i=0; i<4; ++i){
            int xx = x+dx[i];
            int yy = y+dy[i];
            if(box[xx][yy]==0 && xx>=0 && yy>=0 && xx<n && yy<m){
                Q.push(make_pair(xx, yy));
                box[xx][yy] = box[x][y]+1;
            }
        }
    }
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            res = max(res, box[i][j]);
            if(box[i][j]==0) return -1;
        }
    }
    return res-1;
}

int main()
{
    cin >> m >> n;
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            cin >> box[i][j];
            if(box[i][j]==1){
                Q.push(make_pair(i, j));
            }
        }
    }
    cout << BFS() << '\n';
    return 0;
}