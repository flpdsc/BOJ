//텀 프로젝트 https://www.acmicpc.net/problem/9466
#include <iostream>
#include <cstring>
#define MAX 100001
using namespace std;

int graph[MAX];
bool ch[MAX][2]; //0=방문여부, 1=완료여부
int cnt;

void isCycle(int node)
{
    ch[node][0] = true;
    int next = graph[node];
    if(!ch[next][0]) isCycle(next);
    else if(!ch[next][1]){ //방문했으나 완료되지 않았을 때
        for(int i=next; i!=node; i=graph[i]){
            cnt++; //멤버 카운트
        }
        cnt++; //본인 카운트
    }
    ch[node][1] = true;
}

int main()
{
    int t, n;
    cin >> t;
    while(t--){

        memset(ch, false, sizeof(ch));
        cnt = 0;

        cin >> n;
        for(int i=1; i<=n; ++i){
            cin >> graph[i];
        }

        for(int i=1; i<=n; ++i){
            if(!ch[i][0]) isCycle(i);
        }
        cout << n-cnt << '\n';
    }
    return 0;
}