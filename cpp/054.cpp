//치즈 https://www.acmicpc.net/problem/2636
#include <iostream>
#include <queue>
#include <cstring>
#define MAX 100
using namespace std;

int n, m, cnt=0, hour=0, res;
int base[MAX][MAX], ch[MAX][MAX];
queue<pair<int, int> > Q;
int dx[4]={1, 0, -1, 0}, dy[4]={0, 1, 0, -1};

void findCheeze()
{
    memset(ch, false, sizeof(ch));
    Q.push(make_pair(0, 0));
    ch[0][0] = -1;
    while(!Q.empty()){
        int x = Q.front().first;
        int y = Q.front().second;
        Q.pop();
        for(int i=0; i<4; ++i){
            int xx = x+dx[i];
            int yy = y+dy[i];
            if(xx>=0 && yy>=0 && xx<m && yy<n && ch[yy][xx]==0){
                if(base[yy][xx]==1){
                    ch[yy][xx] = 1;
                }
                if(base[yy][xx]==0){
                    ch[yy][xx] = -1;
                    Q.push(make_pair(xx, yy));
                }
            }   
        }
    }
}

void meltCheeze()
{
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            if(ch[i][j]==1){
                base[i][j] = 0;
                cnt--;
            }
        }
    }
    hour++;
}

int main()
{
    cin >> n >> m;
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            cin >> base[i][j];
            if(base[i][j]==1) cnt++;
        }
    }

    while(1){
        if(cnt==0) break;
        else{
            res = cnt;
            findCheeze();
            meltCheeze();
        }
    }
    
    cout << hour << '\n' << res << '\n';
    
    return 0;
}