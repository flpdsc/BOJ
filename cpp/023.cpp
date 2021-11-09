//로또 https://www.acmicpc.net/problem/6603
#include <iostream>
using namespace std;
int k, S[13], R[6];

void DFS(int L, int x)
{
    if(L==6){
        for(int i=0; i<6; ++i){
            cout << R[i] << " ";
        }
        cout << endl;
    }
    else{
        for(int i=x; i<k; ++i){
            R[L] = S[i];
            DFS(L+1, i+1);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    while(1){
        cin >> k;
        if(k==0) break;
        for(int i=0; i<k; ++i) cin >> S[i];
        DFS(0, 0);
        cout << endl;
    }
    return 0;
}
