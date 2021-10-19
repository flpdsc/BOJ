//평범한 배낭 https://www.acmicpc.net/problem/12865
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, k, w, v;
    cin >> n >> k;
    vector<int> dy(k+1);
    for(int i=0; i<n; ++i){
        cin >> w >> v;
        for(int j=k; j>=w; --j) dy[j] = max(dy[j], dy[j-w]+v);
    }
    cout << dy[k] << endl;
    return 0;
}