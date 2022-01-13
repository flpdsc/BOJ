//맥주 마시면서 걸어가기 https://www.acmicpc.net/problem/9205
#include <iostream>
#include <vector>
using namespace std;
const int MAX = 102, IMPOSSIBLE = 12345678;
pair<int, int> Loc[102];
int d[MAX][MAX];

bool canVisit(int x, int y)
{
    if(abs(Loc[x].first-Loc[y].first) + abs(Loc[x].second - Loc[y].second)<=1000)
        return true;
    else return false;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i=0; i<n+2; ++i)
            cin >> Loc[i].first >> Loc[i].second;
        for(int i=0; i<n+2; ++i){
            for(int j=0; j<n+2; ++j){
                if(i!=j){
                    if(canVisit(i, j)) d[i][j] = 1;
                    else d[i][j] = IMPOSSIBLE;
                }
            }
        }

        for(int k=0; k<n+2; ++k)
            for(int i=0; i<n+2; ++i)
                for(int j=0; j<n+2; ++j)
                    d[i][j] = min(d[i][j], d[i][k]+d[k][j]);

        if(d[0][n+1]==IMPOSSIBLE) cout << "sad" << '\n';
        else cout << "happy" << '\n';
    }
    return 0;
}