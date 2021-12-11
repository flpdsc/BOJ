//영역 구하기 https://www.acmicpc.net/problem/2583
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define MAX 100
using namespace std;

int m, n, k, cnt=0;
int map[MAX][MAX];
bool ch[MAX][MAX];
vector<int> areas;
queue<pair<int, int> > Q; //{y, x}
int dx[4]={1, 0, -1, 0}, dy[4]={0, 1, 0, -1};

void input()
{
    cin >> m >> n >> k;

    while(k--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for(int i=0; i<m; ++i){
            for(int j=0; j<n; ++j){
                if(j>=x1 && j<x2 && i>=y1 && i<y2){
                    map[i][j] = 1;
                }
            }
        }
    }
}

void BFS()
{
    for(int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            if(map[i][j]==0){
                int area=1;
                Q.push(make_pair(i, j));
                map[i][j] = 1;

                while(!Q.empty()){
                    int x = Q.front().second;
                    int y = Q.front().first;
                    Q.pop();

                    for(int i=0; i<4; ++i){
                        int xx = x+dx[i];
                        int yy = y+dy[i];
                        if(xx>=0 && yy>=0 && xx<n && yy<m && map[yy][xx]==0 && ch[yy][xx]==0){
                            Q.push(make_pair(yy, xx));
                            map[yy][xx] = 1;
                            area++;
                        }
                    }
                }
                areas.push_back(area);
                cnt++;
            }
        }
    }
}

int main()
{
    input();
    BFS();
    sort(areas.begin(), areas.end());

    cout << cnt << '\n';
    for(int i=0; i<areas.size(); ++i) cout << areas[i] << ' ';
    cout << '\n';

    return 0;
}