//단어 수학 https://www.acmicpc.net/problem/1339
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(26, 0);
    for(int i=0; i<n; ++i)
    {
        string str;
        cin >> str;
        for(int i=0; i<str.size(); ++i)
        {
            a[str[i]-'A'] += pow(10, str.size()-i-1);
        }
    }
    sort(a.begin(), a.end(), greater<int>());

    int res = 0;
    int number = 9;
    for(int i=0; i<a.size(); ++i)
    {
        if(a[i]!=0)
        {
            res += a[i]*number--;
        }
    }

    cout << res << '\n';
    return 0;
}

