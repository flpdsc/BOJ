//벽 부수고 이동하기 https://www.acmicpc.net/problem/2206
#include <iostream>
#include <queue>
#define MAX 1000
using namespace std;

int n, m;
int map[MAX][MAX], dst[MAX][MAX][2];
int dx[4]={0, 1, 0, -1}, dy[4]={1, 0, -1, 0};

struct Loc{
    int x, y, p;
    Loc(int a, int b, int c){
        x = a;
        y = b;
        p = c;
    }
};

int BFS()
{
    queue<Loc> Q;
    Q.push(Loc(0, 0, 1));
    dst[0][0][1] = 1;

    while(!Q.empty()){
        Loc tmp = Q.front();
        Q.pop();

        //도착
        if(tmp.x==n-1 && tmp.y==m-1) return dst[tmp.x][tmp.y][tmp.p];

        for(int i=0; i<4; ++i){
            int xx = tmp.x+dx[i];
            int yy = tmp.y+dy[i];

            
            if(xx>=0 && yy>=0 && xx<n && yy<m){
                //벽O, 힘O
                if(map[xx][yy]==1 && tmp.p==1){
                    dst[xx][yy][tmp.p-1] = dst[tmp.x][tmp.y][tmp.p]+1;
                    Q.push(Loc(xx, yy, tmp.p-1));
                }
                //벽X, 방문X
                else if(map[xx][yy]==0 && dst[xx][yy][tmp.p]==0){
                    dst[xx][yy][tmp.p] = dst[tmp.x][tmp.y][tmp.p]+1;
                    Q.push(Loc(xx, yy, tmp.p));
                }
            }
        }
    }
    return -1;    
}

int main()
{
    cin >> n >> m;
    for(int i=0; i<n; ++i){
        string tmp;
        cin >> tmp;
        for(int j=0; j<m; ++j) map[i][j] = tmp[j]-'0';
    }

    cout << BFS() << '\n';

    return 0;
}