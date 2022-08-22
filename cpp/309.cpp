//스네이크버드 https://www.acmicpc.net/problem/16435
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> h;
    int n, l;
    cin >> n >> l;
    for(int i=0; i<n; ++i){
        int num;
        cin >> num;
        h.push_back(num);
    }
    sort(h.begin(), h.end());

    for(int i=0; i<n; ++i){
        if(l>=h[i]){
            ++l;
        }
    }
    cout << l << '\n';
    return 0;
}