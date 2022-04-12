//종이의 개수 https://www.acmicpc.net/problem/1780
#include <iostream>
using namespace std;

int map[2187][2187], res[3];
int dr[9] = {0, 0, 0, 1, 1, 1, 2, 2, 2};
int dc[9] = {0, 1, 2, 0, 1, 2, 0, 1, 2};

void Sol(int num, int row, int col)
{
    int ch[3] = {0, 0, 0};
    for(int i=0; i<num; ++i){
        for(int j=0; j<num; ++j){
            if(map[row+i][col+j]==-1) ch[0]++;
            else if(map[row+i][col+j]==0) ch[1]++;
            else if(map[row+i][col+j]==1) ch[2]++;

        }
    }

    for(int i=0; i<3; ++i){
        if(ch[i]==num*num){
            res[i]++;
            return;
        }
    }

    for(int i=0; i<9; ++i)
        Sol(num/3, row+dr[i]*num/3, col+dc[i]*num/3);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N;
    cin >> N;
    
    for(int i=0; i<N; ++i)
        for(int j=0; j<N; ++j)
            cin >> map[i][j];

    Sol(N, 0, 0);

    for(int i=0; i<3; ++i)
        cout << res[i] << '\n';

    return 0;
}