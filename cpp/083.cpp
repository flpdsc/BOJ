//행렬 제곱 https://www.acmicpc.net/problem/10830
#include <iostream>
using namespace std;

int n;
long long b;
int mat[5][5], res[5][5], tmp[5][5];

void sol(int m1[5][5], int m2[5][5])
{
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            tmp[i][j] = 0;
            for(int k=0; k<n; ++k)
                tmp[i][j] += (m1[i][k]*m2[k][j]);
            tmp[i][j] %= 1000;
        }
    }
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j)
            m1[i][j] = tmp[i][j];
    }
}

int main()
{
    cin >> n >> b;
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j)
            cin >> mat[i][j];
        res[i][i] = 1;
    }
    while(b){
        if(b%2==1) sol(res, mat);
        sol(mat, mat);
        b /= 2;
    }
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j)
            cout << res[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}