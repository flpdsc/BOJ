//회사에 있는 사람 https://www.acmicpc.net/problem/7785
#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<string> s;
    while(n--)
    {
        string name, stat;
        cin >> name >> stat;
        if(stat == "enter")
            s.insert(name);
        else
            s.erase(name);
    }
    for(auto it=s.rbegin(); it!=s.rend(); ++it)
    {
        cout << *it << '\n';
    }
    return 0;
}