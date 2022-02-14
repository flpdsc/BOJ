//나이트의 이동 https://www.acmicpc.net/problem/7562
#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int dx[8]={1, 2, 2, 1, -1, -2, -2, -1}, dy[8]={2, 1, -1, -2, -2, -1, 1, 2};
int MAP[300][300];

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l;
        pair<int, int> start, end;
        cin >> l >> start.first >> start.second >> end.first >> end.second;
        queue<pair<int, int> > q;
        MAP[start.second][start.first] = 1;
        q.push(start);
        while(!q.empty()){
            pair<int, int> cur;
            cur = q.front();
            q.pop();
            for(int i=0; i<8; ++i){
                int xx = cur.first+dx[i];
                int yy = cur.second+dy[i];
                if(xx>=0 && yy>=0 && xx<l && yy<l && MAP[yy][xx]==0){
                    MAP[yy][xx] = MAP[cur.second][cur.first]+1;
                    if(xx==end.first && yy==end.second) break;
                    q.push(make_pair(xx, yy));
                }
            }
        }
        cout << MAP[end.second][end.first]-1 << '\n';
        memset(MAP, 0, sizeof(MAP));
    }
    return 0;
}