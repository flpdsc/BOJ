//로프 https://www.acmicpc.net/problem/2217
#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 100000
using namespace std;

vector<int> w;

int main()
{
    int n, res=-2147000000;

    cin >> n;

    for(int i=0; i<n; ++i){
        int tmp;
        cin >> tmp;
        w.push_back(tmp);
    }

    sort(w.begin(), w.end());

    for(int i=0; i<n; ++i)
        res = max(res, w[i]*(n-i));

    cout << res << '\n';

    return 0;
}