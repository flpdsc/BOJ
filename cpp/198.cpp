//어린 왕자 https://www.acmicpc.net/problem/1004
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    int T;
    cin >> T;
    while(T--)
    {
        int x1, y1, x2, y2, n;
        cin >> x1 >> y1 >> x2 >> y2 >> n;
        int cnt=0;
        for(int i=0; i<n; ++i)
        {
            int cx, cy, r;
            cin >> cx >> cy >> r;
            bool condition1 = (cx-x1)*(cx-x1)+(cy-y1)*(cy-y1) < r*r;
            bool condition2 = (cx-x2)*(cx-x2)+(cy-y2)*(cy-y2) < r*r;
            if(condition1^condition2) cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}