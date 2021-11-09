//부분수열의 합 https://www.acmicpc.net/problem/1182
#include <iostream>
using namespace std;

int n, s, arr[20], ch[20], sum=0, cnt=0;

void DFS(int LVL, int SUM)
{
    if(LVL==n){
        if(SUM==s) cnt++;
    }
    else{
        DFS(LVL+1, SUM+arr[LVL]);
        DFS(LVL+1, SUM);
    }
}

int main()
{
    cin >> n >> s;
    for(int i=0; i<n; ++i) cin >> arr[i];
    DFS(0, 0);
    if(s==0) cnt--;
    cout << cnt << endl;
    return 0;
}