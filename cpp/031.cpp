//스타트와 링크 https://www.acmicpc.net/problem/14889
#include <iostream>
#include <vector>
using namespace std;
int n, res=2147000000, score[20][20];
bool team[20];

void DFS(int idx, int cnt)
{
    vector<int> start, link;
    int start_score=0, link_score=0;
    if(cnt==n/2){
        for(int i=0; i<n; ++i){
            if(team[i]) start.push_back(i);
            else link.push_back(i);
        }
        for(int i=0; i<n/2; ++i){
            for(int j=0; j<n/2; ++j){
                start_score += score[start[i]][start[j]];
                link_score += score[link[i]][link[j]];
            }
        }
        if(res>abs(start_score - link_score)) res = abs(start_score - link_score);
        return;
    }
    else{
        for(int i=idx; i<n; ++i){
            if(team[i]) continue;
            else{
                team[i] = true;
                DFS(i, cnt+1);
                team[i] = false;
            }
        }
    }
}

int main()
{
    cin >> n;
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            cin >> score[i][j];
        }
    }
    DFS(0, 0);
    cout << res << '\n';
    return 0;
}