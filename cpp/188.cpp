//30 https://www.acmicpc.net/problem/10610
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string n;
    cin >> n;

    bool flag = false;
    long long sum=0;
    vector<int> res;
    for(int i=0; i<n.size(); ++i)
    {
        if(n[i]=='0') flag = true;
        res.push_back(n[i]-'0');
        sum += n[i]-'0';
    }

    if(flag && sum%3==0)
    {
        sort(res.begin(), res.end(), greater<int>());
        for(int i=0; i<res.size(); ++i) cout << res[i];
        cout << '\n';
    } 
    else cout << "-1\n";
    return 0;
}
