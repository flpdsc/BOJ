//괄호 https://www.acmicpc.net/problem/9012
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    for(int i=0; i<t; ++i){
        int chk=0;
        char ps[51];
        cin >> ps;
        for(int j=0; ps[j]!='\0'; ++j){
            if(ps[j]=='(') chk++;
            else if(ps[j]==')') chk--;
            if(chk<0) break;
        }
        if(chk==0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}