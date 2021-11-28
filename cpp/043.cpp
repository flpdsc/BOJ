//미로 탐색 https://www.acmicpc.net/problem/2178
#include <iostream>
#include <queue>
using namespace std;

int n, m;
int map[100][100], dst[100][100];
int dx[4]={0, 1, 0, -1}, dy[4]={1, 0, -1, 0};

struct Loc{
    int x, y;
    Loc(int a, int b){
        x = a;
        y = b;
    }
};

int main()
{
    string s;
    queue<Loc> Q;
    cin >> n >> m;
    for(int i=0; i<n; ++i){
        cin >> s;
        for(int j=0; j<m; ++j){
            if(s[j]=='1') map[i][j] = 1;
            else map[i][j] = 0;
        }
    }
    Q.push(Loc(0,0));
    map[0][0] = 0;
    dst[0][0] = 1;
    while(!Q.empty()){
        Loc tmp = Q.front();
        Q.pop();
        for(int i=0; i<4; ++i){
            int xx = tmp.x+dx[i];
            int yy = tmp.y+dy[i];
            if(map[xx][yy]==1 && xx>=0 && xx<n && yy>=0 && yy<m){
                Q.push(Loc(xx, yy));
                map[xx][yy] = 0;
                dst[xx][yy] = dst[tmp.x][tmp.y] + 1;
            }
        }
    }
    cout << dst[n-1][m-1] << '\n';

    return 0;
}
