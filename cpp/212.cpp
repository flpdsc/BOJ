//두 용액 https://www.acmicpc.net/problem/2470
#include <iostream>
#include <algorithm>
using namespace std;

int solution[100001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    int n;
    cin >> n;
    for(int i=0; i<n; ++i)
        cin >> solution[i];

    sort(solution, solution+n);
    
    int lp=0, rp=n-1;
    int left, right, res=2147000000;
    while(lp<rp)
    {
        int sum = solution[lp]+solution[rp];
        if(abs(res)>abs(sum))
        {
            res = sum;
            left = lp;
            right = rp;
        }
        if(sum>0)
            rp--;
        else
            lp++;
    }
    cout << solution[left] << ' ' << solution[right] << '\n';

    return 0;
}