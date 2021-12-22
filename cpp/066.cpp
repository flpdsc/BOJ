//부등호 https://www.acmicpc.net/problem/2529
#include <iostream>
using namespace std;

int k;
char ies[10];
bool visited[10];
string Min, Max;

bool check(int i, int j, int k)
{
    if(k=='<') return i<j;
    else return i>j;
}

void find(int cnt, string s)
{
    if(cnt==k+1){
        if(!Min.size()) Min = s;
        else Max = s;
        return;
    }
    for(int i=0; i<10; i++){
        if(visited[i]) continue;
        if(cnt==0 || check(s[cnt-1], i+'0', ies[cnt])){
            visited[i] = true;
            find(cnt+1, s+to_string(i));
            visited[i] = false;
        }
    }
}

int main()
{
    cin >> k;
    for(int i=1; i<=k; ++i) cin >> ies[i];
    find(0, "");
    cout << Max << '\n' << Min << '\n';
    return 0;
}