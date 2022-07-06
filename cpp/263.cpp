//카드1 https://www.acmicpc.net/problem/2161
#include <iostream>
#include <list>
using namespace std;
int main()
{
    int n;
    list<int> l;
    cin >> n;
    for(int i=1; i<=n; ++i)
    {
        l.push_back(i);
    }
    while(!l.empty())
    {
        cout << l.front() << ' ';
        l.pop_front();
        l.push_back(l.front());
        l.pop_front();
    }
    return 0;
}