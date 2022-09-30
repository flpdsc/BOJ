//영수증 https://www.acmicpc.net/problem/25304
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    while(y--)
    {
        int cost, stuff;
        cin >> cost >> stuff;
        x -= (cost*stuff);
    }
    if(x==0) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}