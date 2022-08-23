//별 찍기 - 19 https://www.acmicpc.net/problem/10994
#include <iostream>
using namespace std;

bool stars[397][397];
bool flag=true;

void Write(int idx, int num)
{
    if(num<0) return;
    for(int i=idx; i<num; ++i){
        for(int j=idx; j<num; ++j){
            stars[i][j] = flag;
        }
    }
    flag = !flag;
    Write(idx+1, num-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n; 
    cin >> n;
    n = 1+(n-1)*4;
    Write(0, n);
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            if(stars[i][j]) cout << '*';
            else cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}