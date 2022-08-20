//먹을 것인가 먹힐 것인가 https://www.acmicpc.net/problem/7795
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;
    
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> a, b;
        for(int i=0; i<n; ++i){
            int num;
            cin >> num;
            a.push_back(num);
        }
        sort(a.begin(), a.end());
        for(int i=0; i<m; ++i){
            int num;
            cin >> num;
            b.push_back(num);
        }
        sort(b.begin(), b.end());

        int res=0;
        for(int i=0; i<m; ++i){
            int l=0, r=n;
            while(l+1<r){
                int mid = (l+r)/2;
                if(a[mid]>=b[i]) r = mid;
                else l = mid;
            }
            res += (n-r);
        }
        // for(int i=0; i<a.size(); ++i){
        //     int l=0, r=m;
        //     while(l+1<r){
        //         int mid = (l+r)/2;
        //         if(a[i]>b[mid]) l = mid;
        //         else r = mid;
        //     }
        //     res += l;
        //     if(a[i]>b[l]) ++res;
        // }
        cout << res << '\n';
    }
    return 0;
}

// 1   1
// 1   3
// 3   6
// 7
// 8