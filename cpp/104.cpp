//퇴사 https://www.acmicpc.net/problem/14501
#include <iostream>
using namespace std;

pair<int, int> s[16];
int r[17];

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; ++i){
        int t, p;
        cin >> t >> p;
        s[i] = make_pair(t, p);
    }

    for(int i=n; i>0; --i){
        if(s[i].first>n-i+1)
            r[i] = r[i+1];
        else
            r[i] = max(s[i].second+r[i+s[i].first], r[i+1]);
    }

    cout << r[1] << '\n';
}