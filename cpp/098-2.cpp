//바닥 장식 https://www.acmicpc.net/problem/1388
#include <iostream>
using namespace std;

int n, m;
char map[51][51];

void DFS(int r, int c, char d)
{
    if(r<0 && c<0 && r>=n && c>=m ||map[r][c]=='x') return;
    if(d=='h' && map[r][c]=='-'){
        map[r][c] = 'x';
        DFS(r, c+1, 'h');
    }
    if(d=='v' && map[r][c]=='|'){
        map[r][c] = 'x';
        DFS(r+1, c, 'v');
    }
}

int main()
{
    int res=0;
    cin >> n >> m;
    for(int i=0; i<n; ++i)
        for(int j=0; j<m; ++j)
            cin >> map[i][j];

    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            if(map[i][j]!='x') res++;
            if(map[i][j]=='-') DFS(i, j, 'h');
            if(map[i][j]=='|') DFS(i, j, 'v');
        }
    }
    cout << res << '\n';
    return 0;   
}