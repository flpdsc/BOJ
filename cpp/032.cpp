//치킨 배달 https://www.acmicpc.net/problem/15686
#include <iostream>
#include <vector>
using namespace std;

int n, m, ch[13], dst, sum, res=2147000000;
vector<pair<int, int> > house, shop;

void DFS(int L, int S)
{
    if(L==m){
        sum=0;
        for(int i=0; i<house.size(); ++i){
            int x1 = house[i].first;
            int y1 = house[i].second;
            dst = 2147000000;
            for(int j=0; j<m; ++j){
                int x2 = shop[ch[j]].first;
                int y2 = shop[ch[j]].second;
                dst = min(dst, abs(x1-x2)+abs(y1-y2));
            }
            sum += dst;
        }
        if(res>sum) res = sum;
    }
    else{
        // 전체 피자가게 중 m개의 피자가게 선택
        for(int i=S; i<shop.size(); ++i){
            ch[L] = i;
            DFS(L+1, i+1);
        }
    }
}

int main()
{
    cin >> n >> m;
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            int tmp;
            cin >> tmp;
            if(tmp==1) house.push_back(make_pair(i, j));
            else if(tmp==2) shop.push_back(make_pair(i, j));
        }
    }
    DFS(0, 0);
    cout << res << '\n';
    return 0;
}