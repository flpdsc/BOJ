//소트인사이드 https://www.acmicpc.net/problem/1427
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cin >> str;

    vector<int> s;
    for(int i=0; i<str.size(); ++i)
        s.push_back(str[i]-'0');
    sort(s.begin(), s.end());
    
    for(int i=s.size()-1; i>=0; --i)
        cout << s[i];
    cout << endl;
    return 0;
}