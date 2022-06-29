//돌 게임 2 https://www.acmicpc.net/problem/9656
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n%2==0)
        cout << "SK\n";
    else
        cout << "CY\n";
    return 0;
}