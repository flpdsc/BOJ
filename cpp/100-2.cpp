//유기농 배추 https://www.acmicpc.net/problem/1012
#include <iostream>
#include <queue>
using namespace std;
int map[50][50];
int dx[4]={1, 0, -1, 0};
int dy[4]={0, 1, 0, -1};
struct Loc{
    int x, y;
    Loc(int a, int b){
        x = a;
        y = b;
    }
};

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, k, cnt=0;
        queue<Loc> Q;
        cin >> n >> m >> k;
        for(int i=0; i<k; ++i){
            int x, y;
            cin >> x >> y;
            map[x][y] = 1;
        }

        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                if(map[i][j]==1){
                    Q.push(Loc(i, j));
                    map[i][j] = 0;
                    while(!Q.empty()){
                        Loc tmp = Q.front();
                        Q.pop();
                        for(int i=0; i<4; ++i){
                            int xx = tmp.x+dx[i];
                            int yy = tmp.y+dy[i];
                            if(xx>=0 && yy>=0 && xx<n && yy<m && map[xx][yy]==1){
                                Q.push(Loc(xx, yy));
                                map[xx][yy] = 0;
                            }
                        }
                    }
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    
    }
   return 0;
}