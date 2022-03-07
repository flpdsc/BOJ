//ATM https://www.acmicpc.net/problem/11399
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> P;
    int n;
    cin >> n;
    for(int i=0; i<n; ++i){
        int tmp;
        cin >> tmp;
        P.push_back(tmp);
    }   
    sort(P.begin(), P.end());

    int res = P[0];
    for(int i=1; i<n; ++i){
        P[i] += P[i-1];
        res += P[i];
    }
    
    cout << res << '\n';
    return 0;
}