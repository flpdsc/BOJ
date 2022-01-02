//책 나눠주기 https://www.acmicpc.net/problem/9576
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool compare(const pair<int, int>a, const pair<int, int>b){
    if(a.second==b.second) return a.first < b.first;
    else return a.second < b.second;
};

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m, res=0;
        cin >> n >> m;
        vector<pair<int, int> > s;
        bool c[1001] = {false, };

        for(int i=0; i<m; ++i){
            int a, b;
            cin >> a >> b;
            s.push_back({a, b});
        }
        sort(s.begin(), s.end(), compare);
        for(int i=0; i<m; ++i){
            for(int j=s[i].first; j<=s[i].second; ++j){
                if(!c[j]){
                    c[j] = true;
                    break;
                }
            }
        }
        for(int i=1; i<=n; ++i){
            if(c[i]) res++;
        }
        cout << res << '\n';
    }
    return 0;
}