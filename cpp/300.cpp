//킹 https://www.acmicpc.net/problem/1063
#include <iostream>
using namespace std;

int dx[8]={1, -1, 0, 0};
int dy[8]={0, 0, -1, 1};
int x, y;

bool Direction(string cur, string dir)
{
    x=cur[0], y=cur[1];

    for(int i=0; i<dir.size(); ++i){
        int idx;
        if(dir[i]=='R') idx=0;
        else if(dir[i]=='L') idx=1;
        else if(dir[i]=='B') idx=2;
        else if(dir[i]=='T') idx=3;
        x += dx[idx];
        y += dy[idx];
    }
    if(x<'A' || x>'H' || y<'1' || y>'8') return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string k, s;
    int n;
    cin >> k >> s >> n;
    
    while(n--){
        string str;
        cin >> str;
        int kx=k[0], ky=k[1], sx=s[0], sy=s[1];
        if(Direction(k, str)){
            kx = x;
            ky = y;
        }
        if(kx==sx && ky==sy){
            if(Direction(s, str)){
                sx = x;
                sy = y;
            }
        }
        if(kx!=sx || ky!=sy){
            k[0] = kx;
            k[1] = ky;
            s[0] = sx;
            s[1] = sy;
        }
    }
    cout << k << '\n' << s << '\n';
    return 0;
}