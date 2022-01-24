//태권왕 https://www.acmicpc.net/problem/14562
#include <iostream>
#include <queue>
using namespace std;

struct Score{
    int s, t, cnt;
};

void BFS(int me, int you)
{
    queue<Score> q;
    q.push({me, you, 0});
    while(!q.empty())
    {
        Score cur = q.front();
        q.pop();
        if(cur.s==cur.t){
            cout << cur.cnt << '\n';
            return;
        }
        if(cur.s<cur.t){
            Score next = {cur.s*2, cur.t+3, cur.cnt+1};
            q.push(next);
            next = {cur.s+1, cur.t, cur.cnt+1};
            q.push(next);
        }
    }
}

int main()
{
    int c, s, t;
    cin >> c;
    while(c--)
    {
        cin >> s >> t;
        BFS(s, t);
    }
    return 0;
}