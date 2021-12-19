//회의실 배정 https://www.acmicpc.net/problem/1931
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<long long, long long> a, pair<long long, long long> b)
{
    if(a.second==b.second) return a.first < b.first;
    else return a.second < b.second;
}

int main()
{
    int n, cur, cnt=0;
    vector<pair<long long, long long> > arr;
    cin >> n;
    for(int i=0; i<n; ++i){
        int s, e;
        cin >> s >> e;
        arr.push_back(make_pair(s, e));
    }
    sort(arr.begin(), arr.end(), compare);

    cur = arr[0].second;
    cnt++;
    for(int i=1; i<n; ++i){
        if(cur<=arr[i].first){
            cnt++;
            cur = arr[i].second;
        }
    }
    cout << cnt << '\n';
    return 0;
}
