//쿼드트리 https://www.acmicpc.net/problem/1992
#include <iostream>
using namespace std;

string map[64];

void Quard(int r, int c, int q)
{
    if(q==1){
        cout << map[r][c];
        return;
    }

    char find = map[r][c];

    for(int i=r; i<r+q; ++i){
        for(int j=c; j<c+q; ++j){
            if(find!=map[i][j]){
                cout << '(';
                Quard(r, c, q/2);
                Quard(r, c+q/2, q/2);
                Quard(r+q/2, c, q/2);
                Quard(r+q/2, c+q/2, q/2);
                cout << ')';
                return;
            }
        }
    }
    cout << find;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;
    for(int i=0; i<n; ++i)
        cin >> map[i];

    Quard(0, 0, n);

    return 0;
}
