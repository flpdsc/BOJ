//단어 나누기 https://www.acmicpc.net/problem/1251
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cin >> str;
    vector<string> v;
    for(int i=1; i<str.length(); ++i)
    {
        for(int j=1; j<str.length()-i; ++j)
        {
            string l = str.substr(0, i); 
            string m = str.substr(i, j);
            string r = str.substr(i+j, str.length());
            reverse(l.begin(), l.end());
            reverse(m.begin(), m.end());
            reverse(r.begin(), r.end());
            v.push_back(l+m+r);
        }
    }
    sort(v.begin(), v.end());
    cout << v.front() << '\n';
    return 0;
}