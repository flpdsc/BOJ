//양 https://www.acmicpc.net/problem/3184
#include <iostream>
#include <queue>
using namespace std;

int r, c, sheep, wolf;
string map[250];
bool visited[250][250];
int dr[4]={0, 1, 0, -1}, dc[4]={1, 0, -1, 0};

void BFS(int row, int col)
{
    queue<pair<int, int> > q;
    q.push(make_pair(row, col));
    int o=0, v=0;

    visited[row][col] = true;
    if(map[row][col]=='v') v++;
    if(map[row][col]=='o') o++;

    while(!q.empty()){
        pair<int, int> cur;
        cur = q.front();
        q.pop();
        for(int i=0; i<4; ++i){
            int rr = cur.first+dr[i]; 
            int cc = cur.second+dc[i];
            if(rr>=0 && cc>=0 && rr<r && cc<c && !visited[rr][cc] && map[rr][cc]!='#'){
                visited[rr][cc] = true;
                if(map[rr][cc]=='v') v++;
                if(map[rr][cc]=='o') o++;
                q.push(make_pair(rr, cc));
            }
        }
    }

    if(v<o) v=0;
    else o=0;

    sheep += o;
    wolf += v;
}
int main()
{
    cin >> r >> c;
    for(int i=0; i<r; ++i)
        cin >> map[i];

    pair<int, int> res;
    for(int i=0; i<r; ++i)
        for(int j=0; j<c; ++j)
            if(map[i][j]!='#' && !visited[i][j])
                BFS(i, j);
                
    cout << sheep << ' ' << wolf << '\n';
    return 0;
}
