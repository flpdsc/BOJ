//섬의 개수 https://www.acmicpc.net/problem/4963
#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

bool map[50][50];
int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int main()
{
    while(1){
        memset(map, false, sizeof(map));
        int w, h, res=0;
        cin >> w >> h;
        if(w==0 && h==0) break;
        for(int i=0; i<h; ++i){
            for(int j=0; j<w; ++j){
                cin >> map[i][j];
            }
        }

        queue<pair<int, int> > q;
        for(int i=0; i<h; ++i){
            for(int j=0; j<w; ++j){
                if(map[i][j]){
                    q.push(make_pair(i, j));
                    map[i][j] = false;
                    while(!q.empty()){
                        pair<int, int>cur = q.front();
                        q.pop();
                        for(int i=0; i<8; ++i){
                            for(int j=0; j<8; ++j){
                                int xx = cur.second+dx[i];
                                int yy = cur.first+dy[j];
                                if(xx>=0 && yy>=0 && xx<w && yy<h && map[yy][xx]){
                                    q.push(make_pair(yy, xx));
                                    map[yy][xx] = false;
                                }
                            }
                        }
                    }
                    res++;
                }
            }
        }
        cout << res << '\n';
    }
    return 0;
}
