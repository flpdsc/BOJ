//양치기 꿍 https://www.acmicpc.net/problem/3187
#include <iostream>
#include <queue>
using namespace std;

int dr[4]={0, 1, 0, -1}, dc[4]={1, 0, -1, 0};
string map[250];
bool ch[250][250];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int r, c, rv=0, rk=0;
    queue<pair<int, int> > q;

    cin >> r >> c;
    for(int i=0; i<r; ++i)
        cin >> map[i];

    for(int i=0; i<r; ++i){
        for(int j=0; j<c; ++j){
            if(map[i][j]=='#' || map[i][j]=='.' || ch[i][j]) continue;
            q.push(make_pair(i, j));
            ch[i][j] = true;
            int v=0, k=0;
            if(map[i][j]=='v') v++;
            if(map[i][j]=='k') k++;
            while(!q.empty()){
                pair<int, int> cur = q.front();
                q.pop();
                for(int i=0; i<4; ++i){
                    int rr = cur.first+dr[i];
                    int cc = cur.second+dc[i];
                    if(!ch[rr][cc] && map[rr][cc]!='#'){
                        ch[rr][cc] = true;
                        if(map[rr][cc]=='v') v++;
                        if(map[rr][cc]=='k') k++;
                        q.push(make_pair(rr, cc));
                    }
                }
            }
            if(k>v) rk += k;
            else rv += v;
        }
    }
    cout << rk << ' ' << rv << '\n';
    return 0;
}