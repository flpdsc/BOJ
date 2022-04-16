//구간 합 구하기 4 https://www.acmicpc.net/problem/11659
#include <iostream>
#include <vector>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    
    vector<int> nums;
    nums.push_back(0);

    while(n--)
    {
        int num;
        cin >> num;
        num += nums.back();
        nums.push_back(num);        
    }

    while(m--)
    {
        int i, j;
        cin >> i >> j;
        cout << nums[j]-nums[i-1] << '\n';
    }

    return 0;
}