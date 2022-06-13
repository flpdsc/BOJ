//연구소 https://www.acmicpc.net/problem/14502
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n, m, res=0;
int map[8][8];
vector<pair<int, int> > e, v;
int dr[4] = {0, 1, 0, -1}, dc[4] = {1, 0, -1, 0};

int Virus()
{
   //BFS로 바이러스 전파
   for(int i=0; i<v.size(); ++i)
   {
       queue<pair<int, int> > q;
       q.push(make_pair(v[i].first, v[i].second));
       while(!q.empty())
       {
           int r = q.front().first;
           int c = q.front().second;
           q.pop();
           for(int i=0; i<4; ++i)
           {
               int rr = r+dr[i];
               int cc = c+dc[i];
               if(rr>=0 && cc>=0 && rr<n && cc<m && map[rr][cc]==0)
               {
                   map[rr][cc] = 3;
                   q.push(make_pair(rr, cc));
               }
           }
       }
   }

    //Safe Area 구하고 전파된 구간 초기화
    int cnt=0;
    for(int i=0; i<e.size(); ++i)
    {
        if(map[e[i].first][e[i].second]==0)
            cnt++;
        else if(map[e[i].first][e[i].second]==3)
            map[e[i].first][e[i].second] = 0; //초기화
    }
    return cnt;
}

void Wall(int idx, int cnt)
{
    if(cnt==3)
    {
        res = max(res, Virus());
        return;
    }
    for(int i=0; i<e.size(); ++i)
    {
        if(map[e[i].first][e[i].second]==0)
        {
            map[e[i].first][e[i].second] = 1;
            Wall(idx+1, cnt+1);
            map[e[i].first][e[i].second] = 0;
        }

    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> n >> m;
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            cin >> map[i][j];
            if(map[i][j]==0)
                e.push_back(make_pair(i, j));
            else if(map[i][j]==2) 
                v.push_back(make_pair(i, j));
        }
    }
    Wall(0, 0);
    cout << res << '\n';
    return 0;
}