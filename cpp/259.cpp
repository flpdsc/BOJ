//베스트셀러 https://www.acmicpc.net/problem/1302
#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n, b=0;
    string title;
    map<string, int> today;
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        cin >> title;
        today[title]++;
    }
    for(auto t : today)
    {
        b = max(b, t.second);
    }
    for(auto t : today)
    {
        if(t.second == b)
        {
            cout << t.first << '\n';
            return 0;
        }
    }

    return 0;
}