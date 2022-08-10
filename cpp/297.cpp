//수열 https://www.acmicpc.net/problem/2491
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    vector<int> v;
    cin >> n;
    for(int i=0; i<n; ++i){
        int num;
        cin >> num;
        v.push_back(num); 
    }

    int smax=1, seq=1;
    for(int i=1; i<n; ++i){
        if(v[i]>=v[i-1]) ++seq;
        else seq=1;
        smax = max(smax, seq);
    }

    seq = 1;
    for(int i=1; i<n; ++i){
        if(v[i]<=v[i-1]) seq++;
        else seq=1;
        smax = max(smax, seq);
    }

    cout << smax << '\n';
    return 0;
}