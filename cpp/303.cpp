//이장님 초대 https://www.acmicpc.net/problem/9237
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> t(n);
    for(int i=0; i<n; ++i){
        cin >> t[i];
    }
    sort(t.begin(), t.end(), greater<>());
    int res=0;
    for(int i=0; i<n; ++i){
        res = max(res, t[i]+i+2);
    }
    cout << res << '\n';
    return 0;
}