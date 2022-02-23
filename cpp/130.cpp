//숫자판 점프 https://www.acmicpc.net/problem/2210
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char Digit[5][5];
int dr[4]={1, 0, -1, 0}, dc[4]={0, 1, 0, -1};
vector<string> nums;

void DFS(int r, int c, string num)
{
    if(num.size()==6){
        nums.push_back(num);
        return;
    }
    for(int i=0; i<4; ++i){
        int rr = r+dr[i];
        int cc = c+dc[i];
        if(rr>=0 && cc>=0 && rr<5 && cc<5){
            num.push_back(Digit[rr][cc]);
            DFS(rr, cc, num);
            num.pop_back();
        }
    }
}

int main()
{
    for(int i=0; i<5; ++i)
        for(int j=0; j<5; ++j)
            cin >> Digit[i][j];

    for(int i=0; i<5; ++i){
        for(int j=0; j<5; ++j){
            string tmp;
            tmp.push_back(Digit[i][j]);
            DFS(i, j, tmp);
        }
    }

    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    cout << nums.size() << '\n';
    return 0;
}