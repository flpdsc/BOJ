//색종이 만들기 https://www.acmicpc.net/problem/2630
#include <iostream>
using namespace std;

int map[128][128], res[2];
int dr[4] = {0, 0, 1, 1};
int dc[4] = {0, 1, 0, 1};

void Sol(int num, int row, int col)
{
    int ch[2] = {0, 0};
    for(int i=0; i<num; ++i){
        for(int j=0; j<num; ++j){
            if(map[row+i][col+j]==0) ch[0]++;
            else ch[1]++;
        }
    }

    for(int i=0; i<2; ++i){
        if(ch[i]==num*num){
            res[i]++;
            return;
        }
    }

    for(int i=0; i<4; ++i)
        Sol(num/2, row+dr[i]*num/2, col+dc[i]*num/2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;
    for(int i=0; i<n; ++i)
        for(int j=0; j<n; ++j)
            cin >> map[i][j];

    Sol(n, 0, 0);

    for(int i=0; i<2; ++i)
        cout << res[i] << '\n';

    return 0;
}