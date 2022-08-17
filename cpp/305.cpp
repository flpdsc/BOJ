//종이자르기 https://www.acmicpc.net/problem/2628
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int v, h, n;
    cin >> v >> h >> n;
    vector<int> hor, ver;
    hor.push_back(0);
    ver.push_back(0);
    hor.push_back(h);
    ver.push_back(v);
    for(int i=0; i<n; ++i){
        int dir, num;
        cin >> dir >> num;
        if(dir==0) hor.push_back(num);
        else ver.push_back(num);
    }
    int hh=0, vv=0;
    sort(hor.begin(), hor.end());
    for(int i=1; i<hor.size(); ++i){
        hh = max(hh, hor[i]-hor[i-1]);
    }
    sort(ver.begin(), ver.end());
    for(int i=1; i<ver.size(); ++i){
        vv = max(vv, ver[i]-ver[i-1]);
    }
    cout << hh*vv << '\n';
    return 0;
}