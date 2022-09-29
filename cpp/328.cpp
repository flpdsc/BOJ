//무한 문자열 https://www.acmicpc.net/problem/12871
#include <iostream>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    while(s.length()<=100)
    {
        string tmp = s;
        s += tmp;
    }

    while(t.length()<=100)
    {
        string tmp = t;
        t += tmp;
    }

    if(s.substr(0, 100)==t.substr(0, 100)) cout << "1\n";
    else cout << "0\n";

    return 0;
}