//순열 사이클 https://www.acmicpc.net/problem/10451
#include <iostream>
using namespace std;

int arr[1001];
bool isVisited[1001];

void DFS(int x)
{
    if(isVisited[x]) return;
    isVisited[x] = true;
    DFS(arr[x]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        int n, res=0;
        cin >> n;
        for(int i=1; i<=n; ++i)
        {
            cin >> arr[i];
            isVisited[i] = false;
        }
        for(int i=1; i<=n; ++i)
        {
            if(!isVisited[i])
            {
                DFS(i);
                res++;
            }
        }
        cout << res << '\n';
    }
    return 0;
}