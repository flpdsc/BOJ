//카드 https://www.acmicpc.net/problem/11652
#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    map<long long, int> m;
    for(int i=0; i<n; ++i)
    {
        long long tmp;
        cin >> tmp;
        m[tmp]++;
    }

    int max = 0;
    long long res;
    for(auto it:m)
    {
        if(it.second>max)
        {
            max = it.second;
            res = it.first;
        }
    }
    
    cout << res << '\n';
    
    return 0;
}