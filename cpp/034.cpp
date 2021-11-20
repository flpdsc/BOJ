//스도쿠 https://www.acmicpc.net/problem/2580
#include <iostream>
#include <vector>
using namespace std;
int sudoku[9][9];
vector<pair<int, int> > p;
bool end_flag;

bool check(int x, int y, int num)
{
    //가로 검사
    for(int i=0; i<9; ++i){
        if(sudoku[x][i]==num) return false;
    }

    //세로 검사
    for(int i=0; i<9; ++i){
        if(sudoku[i][y]==num) return false;
    }

    //사각형 검사
    int xx = x/3;
    int yy = y/3;
    for(int i=xx*3; i<(xx*3)+3; ++i){
        for(int j=yy*3; j<(yy*3)+3; ++j){
            if(sudoku[i][j]==num) return false;
        }
    }

    return true;
}

void DFS(int idx)
{
    if(end_flag) return;
    if(idx==p.size()){
        end_flag = true;
        for(int i=0; i<9; ++i){
            for(int j=0; j<9; ++j){
                cout << sudoku[i][j] << " ";
            }
            cout << '\n';
        }
    }
    else{
        for(int i=1; i<=9; ++i){
            int x = p[idx].first;
            int y = p[idx].second;
            if(check(x, y, i)){
                sudoku[x][y] = i;
                DFS(idx+1);
                sudoku[x][y] = 0; // 스도쿠 만족 하지 않으면 다시 빠져나옴
            }
        }
    }
}

int main()
{
    for(int i=0; i<9; ++i){
        for(int j=0; j<9; ++j){
            cin >> sudoku[i][j];
            if(sudoku[i][j]==0) p.push_back(make_pair(i, j));
        }
    }
    DFS(0);    
    return 0;
}