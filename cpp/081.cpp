//백조의 호수 https://www.acmicpc.net/problem/3197
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#define MAX 1500
using namespace std;

int dx[4]={1, 0, -1, 0}, dy[4]={0, -1, 0, 1};
string map[MAX];
bool vst[MAX][MAX];

int main()
{
    int r, c, day=0;
    vector<pair<int, int> > swan;
    queue<pair<int, int> > water;
    cin >> r >> c;
    for(int i=0; i<r; ++i){
        cin >> map[i];
        for(int j=0; j<c; ++j){
            if(map[i][j]=='L')
                swan.push_back(make_pair(i, j));
            // if(map[i][j]!='X')
            if(map[i][j]=='.'||map[i][j]=='L')
                water.push(make_pair(i, j));
        }    
    }
    queue<pair<int, int> > q;
    q.push(swan[0]);
    vst[swan[0].first][swan[0].second] = true;
    while(1){
        queue<pair<int, int> > next; //다음날
        bool flag = false;
        while(!q.empty()){
            int x = q.front().second;
            int y = q.front().first;
            q.pop();
            if(x==swan[1].second && y==swan[1].first){
                flag = true;
                break;
            }
            for(int i=0; i<4; ++i){
                int xx = x+dx[i];
                int yy = y+dy[i];
                if(xx<0 || yy<0 || xx>=c || yy>=r || vst[yy][xx]) continue;
                vst[yy][xx] = true;
                if(map[yy][xx]=='X'){
                    next.push(make_pair(yy, xx));
                    continue;
                }
                q.push(make_pair(yy, xx));
            }
        }
        if(flag) break;
        q = next;
        //얼음 녹이기
        int t=water.size();
        while(t--){
            int x = water.front().second;
            int y = water.front().first;
            water.pop();
            for(int i=0; i<4; ++i){
                int xx = x+dx[i];
                int yy = y+dy[i];
                if(xx<0 || yy<0 || xx>=c || yy>=r) continue;
                if(map[yy][xx]=='X'){
                    map[yy][xx] = '.';
                    water.push(make_pair(yy, xx));
                }
            }
        }
        day++;
    }
    cout << day << '\n';
    return 0;
}