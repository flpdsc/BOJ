//알파벳 https://www.acmicpc.net/problem/1987
#include <iostream>
using namespace std;

int r, c, res=0;
string map[20];
bool check[26];

int dr[4] = {0, 1, 0, -1}, dc[4] = {1, 0, -1, 0};

void DFS(int row, int col, int cnt)
{
    res = max(res, cnt);
    for(int i=0; i<4; ++i)
    {
        int rr = row+dr[i];
        int cc = col+dc[i];
        int next = map[rr][cc]-'A';
        if(rr>=0 && cc>=0 && rr<r && cc<c && !check[next])
        {
            check[next] = true;
            DFS(rr, cc, cnt+1);
            check[next] = false;
        }
    }
}

int main()
{
    cin >> r >> c;
    for(int i=0; i<r; ++i)
    {
        cin >> map[i];
    }

    check[map[0][0]-'A'] = true;
    DFS(0, 0, 1);

    cout << res << '\n';
    
    return 0;
}