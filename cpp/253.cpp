//수열 https://www.acmicpc.net/problem/2559
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    vector<int> temp;
    cin >> n >> k;
    for(int i=0; i<n; ++i)
    {
        int tmp;
        cin >> tmp;
        temp.push_back(tmp);
    }
    int sum=0, res;
    for(int i=0; i<k; ++i)
    {
        sum += temp[i];
    }
    res = sum;

    for(int i=k; i<n; ++i)
    {
        sum -= temp[i-k];
        sum += temp[i];
        res = max(res, sum);
    }

    cout << res << '\n';
    return 0;
}