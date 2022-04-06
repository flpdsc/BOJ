//경로 찾기 https://www.acmicpc.net/problem/11403
#include <iostream>
using namespace std;

int N;
bool mat[100][100], visited[100];

void DFS(int node)
{
    for(int i=0; i<N; ++i){
        if(mat[node][i] && !visited[i]){
            visited[i] = true;
            DFS(i);
        }
    }
}

int main()
{
    cin >> N;
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            cin >> mat[i][j];
        }
    }

    for(int i=0; i<N; ++i){
        fill_n(visited, N, false);
        DFS(i);
        for(int j=0; j<N; ++j){
            if(visited[j]){
                mat[i][j] = true;
            }
            cout << mat[i][j] << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}
