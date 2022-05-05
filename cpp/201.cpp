//GCD 합 https://www.acmicpc.net/problem/9613
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int GCD(int a, int b) //a<b
{
    if(a==0) return b;
    else return GCD(b%a, a);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long long res=0;
        vector<int> v;
        cin >> n;
        for(int i=0; i<n; ++i)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }
        sort(v.begin(), v.end());

        for(int i=0; i<n-1; ++i)
        {
            for(int j=i+1; j<n; ++j)
            {
                res += GCD(v[i], v[j]);
            }
        }
        cout << res << '\n';
    }
    return 0;
}
