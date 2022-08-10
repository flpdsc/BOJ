//주몽 https://www.acmicpc.net/problem/1940
#include <iostream>
#include <algorithm>
using namespace std;

int materials[15000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; ++i){
        cin >> materials[i];
    }
    sort(materials, materials+n);
    
    int res=0;
    int l=0, r=n-1;
    while(l<r){
        int sum = materials[l]+materials[r];
        if(sum>m){
            --r;
        }
        else if(sum<m){
            ++l;
        }
        else{
            ++res;
            --r;
            ++l;
        }
    }
    cout << res << '\n';
    return 0;
}