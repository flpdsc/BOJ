//좋은 수열 https://www.acmicpc.net/problem/2661
#include <iostream>
#include <string>
using namespace std;

int n;
string res;
bool flag;

bool isBad(string S)
{
    int len = S.size();
    int end = len-1;

    for(int i=1; i<=len/2; ++i){
        string a = S.substr(end-i, i);
        string b = S.substr(end, i);
        if(!a.compare(b)) return true;
        --end;
    }
    return false;
}

void DFS(int L, string S)
{
    if(flag) return;
    if(isBad(S)) return;
    if(L==n){
        cout << S << '\n';
        flag = true;
    }
    else{
        DFS(L+1, S+"1");
        DFS(L+1, S+"2");
        DFS(L+1, S+"3");
    }
}

int main()
{
    cin >> n;
    DFS(0, "");
    return 0;
}