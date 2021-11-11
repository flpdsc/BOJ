//N-Queen https://www.acmicpc.net/problem/9663
#include <iostream>
using namespace std;
int n, cnt=0, m[15];

bool check(int lv)
{
    for(int i=0; i<lv; ++i){
        // 대각선 또는 같은줄
        // (m[i], i) 이므로 차이가 일정하면 대각선에 위치하는 것
        if(m[i]==m[lv] || abs(m[lv]-m[i])==lv-i) return false;
    }
    return true;
}

void nqueen(int x)
{
    if(x==n) cnt++;
    else{
        for(int i=0; i<n; ++i){
            m[x] = i;
            if(check(x)) nqueen(x+1);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n;
    nqueen(0);
    cout << cnt << endl;
    return 0;
}