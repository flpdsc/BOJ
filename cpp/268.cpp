//수 정렬하기 4 https://www.acmicpc.net/problem/11931
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
        int input;
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end(), greater<int>());
    for(int i=0; i<n; ++i)
    {
        cout << v[i] << '\n';
    }
    return 0;
}