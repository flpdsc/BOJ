//문자열 집합 https://www.acmicpc.net/problem/14425
#include <iostream>
#include <set>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, m, res=0;
    cin >> n >> m;
    string str;
    set<string> s;
    for(int i=0; i<n; ++i)
    {
        cin >> str;
        s.insert(str);
    }
    for(int i=0; i<m; ++i)
    {
        cin >> str;
        if(s.find(str)!=s.end()) ++res;
    }
    cout << res << '\n';
    return 0;
}