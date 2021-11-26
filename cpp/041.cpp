//단지 번호붙이기 https://www.acmicpc.net/problem/2667
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define MAX 25
using namespace std;

int map[MAX+2][MAX+2];
int dx[4]={0, 1, 0, -1}, dy[4]={1, 0, -1, 0};

struct Loc{
    int x, y;
    Loc(int a, int b){
        x = a;
        y = b;
    }
};

int main()
{
    int i, j, n, tot=0, cnt=0;
    queue<pair<int, int> > Q;
    vector<int> res;
    cin >> n;
    for(i=1; i<=n; ++i){
        string tmp;
        cin >> tmp;
        for(j=0; j<n; ++j){
            if(tmp[j]=='0') map[i][j+1] = 0;
            else if(tmp[j]=='1') map[i][j+1] = 1;
        }
    }

    for(i=1; i<=n; ++i){
        for(j=1; j<=n; ++j){
            if(map[i][j]==1){
                Q.push(make_pair(i, j));
                map[i][j] = 0;
                cnt++;
                while(!Q.empty()){
                    int x = Q.front().first;
                    int y = Q.front().second;
                    Q.pop();
                    for(int i=0; i<4; ++i){
                        int xx = x+dx[i];
                        int yy = y+dy[i];
                        if(map[xx][yy]==1){
                            Q.push(make_pair(xx, yy));
                            map[xx][yy] = 0;
                            cnt++;
                        }
                    }
                }
                res.push_back(cnt);
                cnt = 0;
                tot++;
            }
        }
    }
    sort(res.begin(), res.end());
    cout << tot << '\n';
    for(int i=0; i<res.size(); ++i) cout << res[i] << '\n';
    return 0;
}
