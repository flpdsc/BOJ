//침투 https://www.acmicpc.net/problem/13565
#include <iostream>
#include <queue>
using namespace std;

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
string MAP[1000];

int main()
{
    int m, n;
    cin >> m >> n;
    for(int i=0; i<m; ++i)
        cin >> MAP[i];

    queue<int> s;
    for(int i=0; i<n; ++i)
        if(MAP[0][i]=='0')
            s.push(i);

    bool flag = false;
    while(!s.empty()){
        queue<pair<int, int> > q;
        q.push(make_pair(s.front(), 0));
        MAP[0][s.front()] = '1';
        s.pop();
        while(!q.empty()){
            pair<int, int> cur = q.front();
            q.pop();
            for(int i=0; i<4; ++i){
                int xx = cur.first+dx[i];
                int yy = cur.second+dy[i];
                if(xx>=0 && yy>=0 && xx<n && yy<m && MAP[yy][xx]=='0'){
                    MAP[yy][xx] = '1';
                    q.push(make_pair(xx, yy));
                    if(yy==m-1){
                        flag = true;
                        break;
                    }
                }
            }
        }
        if(flag) break;
    }
    
    if(flag) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}