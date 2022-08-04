//암기왕 https://www.acmicpc.net/problem/2776
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        unordered_map<int, bool> nums;
        int n, m;
        cin >> n;
        for(int i=0; i<n; ++i)
        {
            int num;
            cin >> num;
            nums[num] = true;
        }
        cin >> m;
        for(int j=0; j<m; ++j)
        {
            int num;
            cin >> num;
            if(nums[num]) cout << "1\n";
            else cout << "0\n";
        }
    }
    return 0;
}