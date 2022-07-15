//이전 순열 https://www.acmicpc.net/problem/10973
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    vector<int> v;
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    if(prev_permutation(v.begin(), v.end()))
    {
        for(int i=0; i<v.size(); ++i)
        {
            cout << v[i] << ' ';
        }
        cout << '\n';
    }
    else
    {
        cout << "-1\n";
    }
    return 0;
}