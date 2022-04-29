//K번째 수 https://www.acmicpc.net/problem/11004
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> v;
    for(int i=0; i<n; ++i)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());

    cout << v[k-1] << '\n';
    return 0;
}