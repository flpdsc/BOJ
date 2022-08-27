//알바생 강호 https://www.acmicpc.net/problem/1758
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
    vector<int> t;
    for(int i=0; i<n; ++i){
        int tip;
        cin >> tip;
        t.push_back(tip);
    }
    sort(t.begin(), t.end(), greater<>());
    long long res=0;
    for(int i=0; i<n; ++i){
        if(t[i]-i<0) continue;
        res += t[i]-i;
    }
    cout << res << '\n';
    return 0;
}