//가로수 https://www.acmicpc.net/problem/2485
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int GCD(int x, int y)
{
    if(x%y==0) return y;
    else return 1;
    GCD(y, x%y);
}

int main()
{
    int n, d1, d2, res;
    vector<int> tree, diff;
    cin >> n;

    for(int i=0; i<n; ++i){
        int tmp;
        cin >> tmp;
        tree.push_back(tmp);
    }
    sort(tree.begin(), tree.end());

    d1 = tree[1]-tree[0];
    for(int i=1; i<n-1; ++i){
        d2 = tree[i+1]-tree[i];
        if(d2>d1){
            int tmp = d2;
            d2 = d1;
            d1 = tmp;
        }
        d1 = GCD(d1, d2);
    }

    res = ((tree[n-1]-tree[0])/d1)-n+1;
    cout << res << '\n';
    return 0;
}