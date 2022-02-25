//점프 https://www.acmicpc.net/problem/1890 (Top-down)
#include <iostream>
using namespace std;

int n;
int MAP[100][100];
long long cache[100][100];

long long DFS(int r, int c)
{
    if(r==n-1 && c==n-1) return 1; //목적지 도착

    long long& res = cache[r][c];
    if(res!=-1) return res;
    res = 0;

    if(r+MAP[r][c]<n)
        res += DFS(r+MAP[r][c], c); //아래로 이동
    if(c+MAP[r][c]<n)
        res += DFS(r, c+MAP[r][c]); //오른쪽으로 이동
    return res;
}

int main()
{
    cin >> n;

    fill(&cache[0][0], &cache[n-1][n], -1);

    for(int i=0; i<n; ++i)
        for(int j=0; j<n; ++j)
            cin >> MAP[i][j];

    cout << DFS(0, 0) << '\n';
    return 0;
}