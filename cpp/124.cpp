//전쟁 - 전투 https://www.acmicpc.net/problem/1303
#include <iostream>
#include <queue>
using namespace std;

int n, m;
string map[100];
int dr[4]={0, 1, 0, -1}, dc[4]={1, 0, -1, 0};

int BFS(int r, int c, char t)
{
    queue<pair<int, int> > q;
    q.push(make_pair(r, c));
    map[r][c] = '0';
    int cnt=1;
    while(!q.empty()){
        pair<int, int> cur = q.front();
        q.pop();
        for(int i=0; i<4; ++i){
            int rr = cur.first+dr[i];
            int cc = cur.second+dc[i];
            if(rr>=0 && cc>=0 && rr<m && cc<n && map[rr][cc]==t){
                map[rr][cc] = '0';
                cnt++;
                q.push(make_pair(rr, cc));
            }
        }
    }
    return cnt*cnt;
}

int main()
{
    int white=0, blue=0;
    cin >> n >> m;
    for(int i=0; i<m; ++i)
        cin >> map[i];

    queue<pair<int, int> > w, b;
    for(int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            if(map[i][j]=='W'){
                white += BFS(i, j, 'W');
            }
            else if(map[i][j]=='B'){
                blue += BFS(i, j, 'B');
            }
        }
    }

    cout << white << ' ' << blue << '\n';
    return 0;
}