//안전 영역 https://www.acmicpc.net/problem/2468
#include <iostream>
#include <queue>
#define MAX 100
using namespace std;

int map[MAX][MAX];
int dx[4]={1, 0, -1, 0}, dy[4]={0, -1, 0, 1};


int main()
{
    int n, rain=0, res=0;
    cin >> n;
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            cin >> map[i][j];
            rain = max(rain, map[i][j]);
        }
    }
    queue<pair<int, int> > q;
    while(rain--){
        int cnt=0;
        bool ch[MAX][MAX] = {{false, false}, };
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                if(map[i][j]>rain && !ch[i][j]){
                    q.push(make_pair(i, j));
                    ch[i][j] = true;
                    while(!q.empty()){
                        pair<int, int> loc = q.front();
                        q.pop();
                        for(int i=0; i<4; ++i){
                            int xx = loc.second+dx[i];
                            int yy = loc.first+dy[i];
                            if(xx>=0 && yy>=0 && xx<n && yy<n && map[yy][xx]>rain && !ch[yy][xx]){
                                q.push(make_pair(yy, xx));
                                ch[yy][xx] = true;
                            }
                        }
                    }
                    cnt++;
                }
            }
        }
        res = max(res, cnt);
    }
    cout << res << '\n';
    return 0;
}