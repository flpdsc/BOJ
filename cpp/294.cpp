//DNA https://www.acmicpc.net/problem/1969
#include <iostream>
using namespace std;

string mat[1000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; ++i){
        cin >> mat[i];
    }

    int HD=0;
    for(int i=0; i<m; ++i){
        int A=0, T=0, G=0, C=0;
        for(int j=0; j<n; ++j){
            if(mat[j][i]=='A') ++A;
            else if(mat[j][i]=='T') ++T;
            else if(mat[j][i]=='G') ++G;
            else if(mat[j][i]=='C') ++C;
        }
        if(A>=T && A>=G && A>=C){
            cout << 'A';
            HD += T+G+C;
        }
        else if(C>=A && C>=T && C>=G){
            cout << 'C';
            HD += A+T+G;
        }
        else if(G>=A && G>=T && G>=C){
            cout << 'G';
            HD += A+T+C;
        }
        else if(T>=A && T>=G && T>=C){
            cout << 'T';
            HD += A+G+C;
        }
    }
    cout << '\n' << HD << '\n';
    return 0;
}