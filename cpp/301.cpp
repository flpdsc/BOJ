//자리배정 https://www.acmicpc.net/problem/10157
#include <iostream>
using namespace std;

bool seat[1000][1000];
int dc[4]={0, 1, 0, -1}, dr[4]={1, 0, -1, 0};

int main()
{
    int c, r, k;
    cin >> c >> r >> k;
    if(c*r<k){ 
        cout << "0\n";
        return 0;
    }
    int d=0;
    int x=0, y=0;
    for(int i=1; i<k; ++i){
        seat[y][x] = true;
        int xx = x+dc[d];
        int yy = y+dr[d];
        if(xx<0 || yy<0 || xx>=c || yy>=r || seat[yy][xx]){
            d = (d+1)%4;
            xx = x+dc[d];
            yy = y+dr[d];
        }
        x = xx;
        y = yy;
    }
    cout << x+1 << ' ' << y+1 << '\n';
    return 0;
}