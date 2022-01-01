//보석 도둑 https://www.acmicpc.net/problem/1202
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    long long res=0;

    cin >> n >> k;

    vector<pair <int, int> > jwl(n);
    vector<int> bag(k);
    priority_queue<int> pq;

    for(int i=0; i<n; ++i)
        cin >> jwl[i].first >> jwl[i].second;
    sort(jwl.begin(), jwl.end());

    for(int i=0; i<k; ++i)
        cin >> bag[i];
    sort(bag.begin(), bag.end());

    int idx=0;
    for(int i=0; i<k; ++i){
        while(idx<n && jwl[idx].first<=bag[i])
            pq.push(jwl[idx++].second);
        if(!pq.empty()){
            res += (long long)pq.top();
            pq.pop();
        }
    }
    cout << res << '\n';
    return 0;
}