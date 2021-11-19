//좋은 수열 https://www.acmicpc.net/problem/2661
#include <iostream>
using namespace std;
int n, arr[80];
bool ending;

void DFS(int L)
{
    //가장 작은 수일 때 return
    if(ending) return;

    //나쁜 수열이면 return
    for(int i=1; i<=L/2; ++i){
        if(equal(arr+L-i, arr+L, arr+L-i*2)) return;
    }

    if(L==n){
        for(int i=0; i<n; ++i) cout << arr[i];
        cout << '\n';
        ending = true;
    }
    else{
        
        for(int i=1; i<=3; ++i){
            arr[L] = i;
            DFS(L+1);
        }
    }
}

int main()
{
    cin >> n;
    DFS(0);
    return 0;
}