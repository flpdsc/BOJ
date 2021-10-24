//스택 https://www.acmicpc.net/problem/10828
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, tos=-1;
    cin >> n;
    vector<int> stack(n);
    for(int i=0; i<n; ++i){
        string cmd;
        cin >> cmd;
        if(cmd=="push"){
            int num;
            cin >> num;
            stack[++tos] = num;
        }
        else if(cmd=="pop"){
            if(tos<0) cout << -1 << endl; 
            else cout << stack[tos--] << endl;
        }
        else if(cmd=="size"){
            cout << tos+1 << endl;
        }
        else if(cmd=="empty"){
            if(tos==-1) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else if(cmd=="top"){
            if(tos<0) cout << -1 << endl; 
            else cout << stack[tos] << endl;
        }
    }
    return 0;
}