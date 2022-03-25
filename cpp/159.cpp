//별 찍기 - 10 https://www.acmicpc.net/problem/2447
#include <iostream>
using namespace std;

char star='*', blank=' ';

void Sol(int r, int c, int num)
{
    if((r/num)%3==1 && (c/num)%3==1)
        cout << blank;
    else{
        if(num/3==0) cout << star;
        else Sol(r, c, num/3);
    }
}

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            Sol(i, j, n);
        }
        cout << '\n';
    }
    return 0;
}
