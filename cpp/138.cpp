//셀프 넘버 https://www.acmicpc.net/problem/4673
#include <iostream>
#define MAX 10000
using namespace std;

bool ch[MAX+1];

void d(int g){
    int res=g;
    while(g){
        res += g%10; 
        g /= 10;
    }
    ch[res] = true;
    if(res<MAX) d(res);
}

int main()
{
    for(int i=1; i<=MAX; ++i)
        if(!ch[i]) d(i);

    for(int i=1; i<=MAX; ++i)
        if(!ch[i]) cout << i << '\n';

    return 0;
}