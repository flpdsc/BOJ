//연료 채우기 https://www.acmicpc.net/problem/1826
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    int n, l, p;
    pair<int, int> gas[10000];
 
    cin >> n;
    for(int i=0; i<n; ++i)
        cin >> gas[i].first >> gas[i].second;
    cin >> l >> p;
    sort(gas, gas+n);

    priority_queue<int> pq;
    //curP:현재 연료로 갈 수 있는 주유소 인덱스
    //curL:현재 연료량(현재 갈 수 있는 거리)
    int curP=0, curL=p, res=0;

    while(curL<l){
        while(curP<n&&gas[curP].first<=curL)
            pq.push(gas[curP++].second);
        if(pq.empty()){
            res = -1;
            break;
        }
        curL += pq.top();
        pq.pop();
        res++;
    }

    cout << res << '\n';
    return 0;
}