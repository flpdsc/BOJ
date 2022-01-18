//음식물 피하기 https://www.acmicpc.net/problem/1743
#include <iostream>
#include <queue>
using namespace std;

const int nmMax = 101;
int n, m, k, res=0;
bool map[nmMax][nmMax];
int dr[4]={1, 0, -1, 0}, dc[4]={0, 1, 0, -1};

void BFS()
{
    queue<pair<int, int> > q;
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=m; ++j){
            if(map[i][j]){
                q.push(make_pair(i, j));
                map[i][j] = false;
                int area=1;
                while(!q.empty()){
                    pair<int, int> Loc = q.front();
                    q.pop();
                    for(int i=0; i<4; ++i){
                        int rr = Loc.first+dr[i];
                        int cc = Loc.second+dc[i];
                        if(rr>0 && cc>0 && rr<=n && cc<=m && map[rr][cc]){
                            map[rr][cc] = false;
                            q.push(make_pair(rr, cc));
                            area++;
                        }
                    }
                }
                res = max(res, area);
            }
        }
    }
}

int main()
{
    cin >> n >> m >> k;
    for(int i=0; i<k; ++i){
        int r, c;
        cin >> r >> c;
        map[r][c] = true;
    }

    BFS();
    cout << res << '\n';
    
    return 0;
}