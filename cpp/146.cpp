//터렛 https://www.acmicpc.net/problem/1002
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        int dd = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
        int add = (r1+r2)*(r1+r2);
        int sub = r1>r2 ? (r1-r2)*(r1-r2) : (r2-r1)*(r2-r1);
        if(dd==0 && r1==r2)
            cout << "-1\n";
        else if(add==dd || sub==dd)
            cout << "1\n";
        else if(sub<dd && dd<add)
            cout << "2\n";
        else
            cout << "0\n";
    }
    return 0;
}