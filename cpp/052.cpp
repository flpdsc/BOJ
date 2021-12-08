//토마토 https://www.acmicpc.net/problem/7569
#include <iostream>
#include <queue>
#define MAX 100
using namespace std;

struct Loc{
    int x, y, z;
    Loc(int a, int b, int c){
        x = a;
        y = b;
        z = c;
    }
};

int m, n, h, res=0;
int box[MAX][MAX][MAX];
queue<Loc> Q;
int dx[6]={0, 1, 0, -1, 0, 0}, dy[6]={-1, 0, 1, 0, 0, 0}, dz[6]={0, 0, 0, 0, 1, -1};


int BFS()
{
    while(!Q.empty()){
        Loc cur = Q.front();
        Q.pop();
        for(int i=0; i<6; ++i){
            int xx = cur.x+dx[i];
            int yy = cur.y+dy[i];
            int zz = cur.z+dz[i];
            if(xx>=0 && yy>=0 && zz>=0 && xx<m && yy<n && zz<h){
                if(box[zz][yy][xx]==0){
                    Q.push(Loc(xx, yy, zz));
                    box[zz][yy][xx] = box[cur.z][cur.y][cur.x]+1;
                }
            }
        }
    }
    for(int i=0; i<h; ++i){
        for(int j=0; j<n; ++j){
            for(int k=0; k<m; ++k){
                res = max(res, box[i][j][k]);
                if(box[i][j][k]==0) return -1;
            }
        }
    }
    return res-1;
}

int main()
{
    cin >> m >> n >> h; 
    for(int i=0; i<h; ++i){
        for(int j=0; j<n; ++j){
            for(int k=0; k<m; ++k){
                cin >> box[i][j][k];
                if(box[i][j][k]==1) Q.push(Loc(k, j, i));
            }
        }
    }
    cout << BFS() << '\n';
    return 0;
}