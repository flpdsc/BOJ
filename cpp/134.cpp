//아기 상어 2 https://www.acmicpc.net/problem/17086
#include <iostream>
#include <queue>
using namespace std;

int dr[8]={1, 1, 0, -1, -1, -1, 0, 1};
int dc[8]={0, -1, -1, -1, 0, 1, 1, 1};
int map[50][50];
bool ch[50][50];

int main()
{
    int n, m, res=0;
    queue<pair<int, int> > q;
    cin >> n >> m;
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            cin >> map[i][j];
            if(map[i][j]) q.push(make_pair(i, j));
        }
    }

    while(!q.empty()){
        int r=q.front().first, c=q.front().second;
        ch[r][c] = true;
        q.pop();
        for(int i=0; i<8; ++i){
            int rr=r+dr[i], cc=c+dc[i];
            if(rr>=0 && cc>=0 && rr<n && cc<m && map[rr][cc]!=1 && !ch[rr][cc]){
                ch[rr][cc] = true;
                if(map[rr][cc]==0) map[rr][cc] = map[r][c]+1;
                else map[rr][cc] = min(map[rr][cc], map[r][c]+1);
                res = max(res, map[rr][cc]);
                q.push(make_pair(rr, cc));
            }
        }
    }
    cout << res-1 << '\n';
    return 0;
}