//비밀번호 찾기 https://www.acmicpc.net/problem/17219
#include <iostream>
#include <map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, m;
    map<string, string> pm;
    cin >> n >> m;
    for(int i=0; i<n; ++i)
    {
        string site, pw;
        cin >> site >> pw;
        pm.insert({site, pw});
    }
    for(int i=0; i<m; ++i)
    {
        string site;
        cin >> site;
        cout << pm[site] << '\n';
    }
    return 0;
}