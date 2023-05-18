//서로 다른 부분 문자열의 개수 https://www.acmicpc.net/problem/11478
#include <iostream>
#include <set>
using namespace std;
int main()
{
    string s;
    cin >> s;

    set<string> ss;

    for(int i=0; i<s.size(); ++i)
        for(int j=1; j<=s.size()-i; ++j)
            ss.insert(s.substr(i, j));

    cout << ss.size() <<'\n';
    return 0;
}