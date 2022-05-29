//인구 이동 https://www.acmicpc.net/problem/16234
#include <iostream>
#include <queue>
using namespace std;

int n, l, r;
int A[50][50];
int sum;
bool isVisited[50][50];
int dr[4] = {1, 0, -1, 0}, dc[4] = {0, 1, 0, -1};
vector<pair<int, int> > v;

void BFS(int row, int col)
{
    queue<pair<int, int> > q;

    q.push(make_pair(row, col));

    while(!q.empty())
    {
        row = q.front().first;
        col = q.front().second;
        q.pop();
        for(int i=0; i<4; ++i)
        {
            int rr = row+dr[i];
            int cc = col+dc[i];
            if(rr>=0 && cc>=0 && rr<n && cc<n && !isVisited[rr][cc])
            {
                int d = abs(A[row][col]-A[rr][cc]);
                if(d>=l && d<=r)
                {
                    isVisited[rr][cc] = true;
                    v.push_back(make_pair(rr, cc));
                    sum += A[rr][cc];
                    q.push(make_pair(rr, cc));
                }

            }
        }
    }
}

int main()
{
    cin >> n >> l >> r;
    for(int i=0; i<n; ++i)
        for(int j=0; j<n; ++j)
            cin >> A[i][j];

    int day=0;
    bool flag = true;
    while(flag)
    {
        fill(&isVisited[0][0], &isVisited[49][50], false);
        flag = false;

        for(int i=0; i<n; ++i)
        {
            for(int j=0; j<n; ++j)
            {  
                if(!isVisited[i][j])
                {
                    isVisited[i][j] = true;
                    v.push_back(make_pair(i, j));
                    sum = A[i][j];
                    BFS(i, j);

                }

                if(v.size()>1)
                {
                    int avg = sum/v.size();
                    flag = true;
                    for(int i=0; i<v.size(); ++i)
                    {
                        A[v[i].first][v[i].second] = avg;
                    }
                }
                v.clear();
            }
        }

        if(flag)
        {
            day++;
        }
    }
    cout << day << '\n';
    return 0;
}