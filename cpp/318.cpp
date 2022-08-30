//오늘도 졌다 https://www.acmicpc.net/problem/14582
#include <iostream>
using namespace std;
int main()
{
    int wa[9];
    for(int i=0; i<9; ++i)
        cin >> wa[i];

    int sa[9];
    for(int i=0; i<9; ++i)
        cin >> sa[i];

    int w=0, s=0;
    for(int i=0; i<9; ++i)
    {
        w += wa[i];
        if(w>s)
        {
            cout << "Yes\n";
            return 0;
        }
        s += sa[i];
    }
    cout << "No\n";
    return 0;
}