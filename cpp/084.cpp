//촌수계산 https://www.acmicpc.net/problem/2644
#include <iostream>
#include <vector>
using namespace std;

int res;
bool visited[101];
vector<int> arr[101];

void DFS(int now, int end, int cnt){
    
    if(now==end) res = cnt;
    else{
        visited[now] = true;
        for(int i=0; i<arr[now].size(); ++i){
            int next = arr[now][i];
            if(!visited[next])
                DFS(next, end, cnt+1);
        }
    }
}

int main()
{
    int n, a, b, m;
    cin >> n >> a >> b >> m;
    for(int i=0; i<m; ++i){
        int x, y;
        cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    DFS(a, b, 0);
    if(res==0) cout << "-1\n";
    else cout << res << '\n';
    return 0;
}