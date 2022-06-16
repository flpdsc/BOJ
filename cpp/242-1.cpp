//다음 순열 https://www.acmicpc.net/problem/10972
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    vector<int> a;
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    if(next_permutation(a.begin(), a.end()))
    {
        for(int i=0; i<a.size(); ++i)
        {
            cout << a[i] << ' ';
        }
        cout << '\n';
    }
    else
    {
        cout << "-1\n";
    }
    return 0;
}