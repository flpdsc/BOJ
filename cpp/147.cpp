//체스판 다시 칠하기 https://www.acmicpc.net/problem/1018
#include <iostream>
using namespace std;

string board[50];
bool ch[50][50];

int sol(int r, int c)
{
    int cnt=0;

    for(int i=0+r; i<8+r; ++i)
        for(int j=0+c; j<8+c; ++j)
            if(ch[i][j]) cnt++;

    if(cnt>32) return 64-cnt;
    else return cnt;
}

int main()
{
    int n, m, res=2147000000;
    cin >> n >> m;
    for(int i=0; i<n; ++i)
        cin >> board[i];

    for(int i=0; i<n; ++i){
        for(int j=0; j<m; j+=2){
            if(i%2==0){
                if(board[i][j]!=board[0][0]) ch[i][j] = true;
                if(board[i][j+1]==board[0][0]) ch[i][j+1] = true;
            }
            else{
                if(board[i][j+1]!=board[0][0]) ch[i][j+1] = true;
                if(board[i][j]==board[0][0]) ch[i][j] = true;
            } 
        }
    }

    for(int i=0; i<=n-8; ++i)
        for(int j=0; j<=m-8; ++j)
            res = min(res, sol(i, j));

    cout << res << '\n';
    return 0;
}
