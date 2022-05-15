//N과 M (7) https://www.acmicpc.net/problem/15656
#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int nums[7], res[7];

void DFS(int depth)
{
    if(depth==m)
    {
        for(int i=0; i<m; ++i)
        {
            cout << res[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i=0; i<n; ++i)
    {
        res[depth] = nums[i];
        DFS(depth+1);
    }

}

int main()
{
    cin >> n >> m;
    for(int i=0; i<n; ++i)
    {
        cin >> nums[i];
    }
    sort(nums, nums+n);
    DFS(0);
    return 0;
}