//바닥 장식 https://www.acmicpc.net/problem/1388
#include <iostream>
using namespace std;


int main()
{
    int n, m, res=0;
    string str[50];
    cin >> n >> m;
    for(int i=0; i<n; ++i)
        cin >> str[i];

    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            if(str[i][j]=='-' && (j==m-1 || str[i][j+1]=='|')) res++;
            if(str[i][j]=='|' && (i==n-1 || str[i+1][j]=='-')) res++;
        }
    }
    cout << res << '\n';
    return 0;
}