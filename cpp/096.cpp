//데스 나이트 https://www.acmicpc.net/problem/16948
#include <iostream>
#include <queue>
using namespace std;

int n, a, b;
queue<pair<int, int> > q;
int dr[6] = {-2, -2, 0, 0, 2, 2};
int dc[6] = {-1, 1, -2, 2, -1, 1};
int board[200][200];

void BFS()
{
    bool flag = false;
    while(!q.empty()){
        int r = q.front().first;
        int c = q.front().second;
        q.pop();

        for(int i=0; i<6; ++i){
            int rr = r+dr[i];
            int cc = c+dc[i];
            if(rr>=0 && cc>=0 && rr<n && cc<n && board[rr][cc]==0){
                board[rr][cc] = board[r][c]+1;
                if(rr==a && cc==b){
                    flag = true;
                    break;
                }
                q.push(make_pair(rr, cc));
            }
        }
        if(flag) break;
    }
}

int main()
{
    cin >> n >> a >> b;
    board[a][b] = 1;
    q.push(make_pair(a, b));
    cin >> a >> b;
    BFS();
    cout << board[a][b]-1 << '\n';   
    return 0;
}