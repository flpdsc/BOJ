//동전 2 https://www.acmicpc.net/problem/2294
#include <iostream>
#include <vector>
using namespace std;

int DP[10001];
bool Ch[100001];

int main()
{
    fill(DP, DP+10001, 10001);
    int n, k;
    vector<int> idx;
    cin >> n >> k;
    for(int i=0; i<n; ++i){
        int tmp;
        cin >> tmp;
        if(!Ch[tmp]) idx.push_back(tmp);
        Ch[tmp] = true;
    }

    for(int i=0; i<idx.size(); ++i){
        for(int j=idx[i]; j<=k; ++j){
            DP[j] = min(DP[j], DP[j-idx[i]]+1);
        }
    }

    if(DP[k]!=10001) cout << DP[k] << '\n';
    else cout << "-1\n";
    return 0;
}
