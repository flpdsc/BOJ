//먹을 것인가 먹힐 것인가 https://www.acmicpc.net/problem/7795
//투포인터
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

        int res=0, p=0;
        for(int i=0; i<a.size(); ++i){
            while((p<m)&&(a[i]>b[p])){
                ++p;
            }
            res += p;
        }
        cout << res << '\n';
    }
    return 0;
}