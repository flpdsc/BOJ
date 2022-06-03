//뱀 https://www.acmicpc.net/problem/3190
#include <iostream>
#include <queue>
#include <deque>
using namespace std;

int dr[] = {0, 1, 0, -1}, dc[] = {1, 0, -1, 0};
int map[100][100];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, k, l;
    cin >> n >> k;
    for(int i=0; i<k; ++i)
    {
        int r, c;
        cin >> r >> c;
        map[r-1][c-1] = 1; //(1, 1)을 기준으로 입력을 받으므로 -1
    }

    //조작 입력받아 queue에 저장
    queue<pair<int, char> > op;
    cin >> l;
    for(int i=0; i<l; ++i)
    {
        int x;
        char c;
        cin >> x >> c;
        op.push(make_pair(x, c));
    }

    //deque에 뱀의 위치 좌표 저장
    //map에 뱀의 위치는 -1로 나타냄 
    deque<pair<int, int> > dq;
    int r=0, c=0;
    dq.push_back(make_pair(r, c));
    map[r][c] = -1;

    //시간과 방향 전환을 위한 변수 time, dir
    int time=0, dir=0;

    while(1)
    {
        time++;

        int rr = r+dr[dir];
        int cc = c+dc[dir];

        //벽에 부딪히거나 몸에 부딪히면 break
        if((rr<0 || cc<0 || rr>=n || cc>=n) || map[rr][cc]==-1)
        {
            break;
        }
        //사과 없을 때 머리 더하고 꼬리부분 빼기 
        else if(map[rr][cc]==0) 
        {
            map[rr][cc] = -1;
            map[dq.back().first][dq.back().second] = 0;
            dq.pop_back();
            dq.push_front(make_pair(rr, cc));
        }
        //사과 있을 때 머리만 더해줌
        else if(map[rr][cc]==1) 
        {
            map[rr][cc] = -1;
            dq.push_front(make_pair(rr, cc));
        }
        
        r = rr;
        c = cc;

        //방향전환
        if(!op.empty() && op.front().first==time)
        {
            if(op.front().second == 'L') dir = (dir==0) ? 3 : dir-1;
            else if(op.front().second == 'D')dir = (dir==3) ? 0 : dir+1;
            op.pop();
        }
    }

    cout <<  time << '\n';

    return 0;
}