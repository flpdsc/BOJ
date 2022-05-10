//외판원 순회 2 https://www.acmicpc.net/problem/10971
#include <iostream>
using namespace std;

int n, res=2147000000, start;
int matrix[10][10];
bool isVisited[10];

void DFS(int ver, int cst, int cnt)
{
    if(cnt==n)
    {
        if(matrix[ver][start]!=0) //마지막 방문에서 시작점으로 돌아가는 것 고려해주어야 함
            res = min(res, cst+matrix[ver][start]);
        return;
    }
    for(int i=0; i<n; ++i)
    {
        if(matrix[ver][i]!=0 && !isVisited[i])
        {
            isVisited[i] = true;
            if(cst+matrix[ver][i]<res) //현재까지의 최소비용보다 비용이 크면 탐색하지 않음
                DFS(i, cst+matrix[ver][i], cnt+1);
            isVisited[i] = false;
        }
    }
}

int main()
{

    cin >> n;
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    for(int i=0; i<n; ++i)
    {
        start = i;
        isVisited[i] = true;
        DFS(i, 0, 1);
        isVisited[i] = false;
    }    
    cout << res << '\n';
    return 0;
}