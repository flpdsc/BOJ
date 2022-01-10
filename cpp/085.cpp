//스타트링크 https://www.acmicpc.net/problem/5014
#include <iostream>
#include <queue>
using namespace std;

queue<int> q;
int visited[1000001];

int main()
{
    int F, S, G, U, D;
    cin >> F >> S >> G >> U >> D;
    // 1 ≤ S, G ≤ F ≤ 1000000
    // 0 ≤ U, D ≤ 1000000
    q.push(S);
    visited[S] = 1;
    while(!q.empty()){
        int curr = q.front();
        int next[2] = {curr+U, curr-D};
        q.pop();
        if(curr==G){
            cout << visited[G]-1 << '\n';
            return 0;
        }
        for(int i=0; i<2; ++i){
            if(next[i]>0&&next[i]<=F&&visited[next[i]]==0){
                visited[next[i]] = visited[curr]+1;
                q.push(next[i]);
            }
        }
    }
    cout << "use the stairs\n";
    return 0;
}