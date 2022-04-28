//접미사 배열 https://www.acmicpc.net/problem/11656
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> ss;

int main()
{
    string s;
    cin >> s;

    for(int i=0; i<s.size(); ++i)
        ss.push_back(s.substr(i, s.size()));

    sort(ss.begin(), ss.end());

    for(int i=0; i<ss.size(); ++i)
        cout << ss[i] << '\n';

    return 0;
}