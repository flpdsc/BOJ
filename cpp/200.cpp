//N과 M (8) https://www.acmicpc.net/problem/15657
#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int nums[8], res[9];

void Sol(int idx)
{
    if(idx>m)
    {
        for(int i=1; i<=m; ++i)
            cout << res[i] << ' ';
        cout << '\n';
        return;
    }
    for(int i=0; i<n; ++i)
    {
        if(nums[i]>=res[idx-1])
        {
            res[idx] = nums[i];
            Sol(idx+1);
        }
    }

}

int main()
{
    cin >> n >> m;
    for(int i=0; i<n; ++i)
        cin >> nums[i];
    sort(nums, nums+n);
    Sol(1);
    return 0;
}