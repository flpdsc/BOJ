//달팽이 https://www.acmicpc.net/problem/1913
#include <iostream>
using namespace std;

int dx[4] = {0, 1, 0, -1}, dy[4] = {-1, 0, 1, 0};
int map[999][999];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    int x=n/2, y=n/2;
    int dir=0;
    int mx = x, my = y;

    map[y][x] = 1;
    for(int i=2; i<=n*n; ++i){
        int xx = x+dx[dir%4];
        int yy = y+dy[dir%4];
        if(map[yy][xx]==0){
            x = xx;
            y = yy;
        }
        else{
            --dir;
            x = x+dx[dir%4];
            y = y+dy[dir%4];
        }
        map[y][x] = i;
        if(i==m){
            mx = x;
            my = y;
        }
        ++dir;
    }

    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            cout << map[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << my+1 << ' ' << mx+1 << '\n';

    return 0;
}