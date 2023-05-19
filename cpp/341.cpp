//누울 자리를 찾아라 https://www.acmicpc.net/problem/1652
#include <iostream>
using namespace std;

int n;
string room[100];
const char e='.', b='X';

int main()
{
    cin >> n;
    for(int i=0; i<n; ++i)
        cin >> room[i];

    int r=0, c=0;
    for(int i=0; i<n; ++i)
    {
        //가로
        int t=-1, cnt=0;
        while(++t<n)
        {
            if(room[i][t]=='X')
            {
                if(cnt>1) ++r;
                cnt=0;
            }
            else ++cnt;
        }
        if(cnt>1) ++r;

        //세로
        t=-1, cnt=0;
        while(++t<n)
        {
            if(room[t][i]=='X')
            {
                if(cnt>1) ++c;
                cnt=0;
            }
            else ++cnt;
        }
        if(cnt>1) ++c;        
    }
    cout << r << ' ' << c;
    return 0;
}