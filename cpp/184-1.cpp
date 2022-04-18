//수들의 합 2 https://www.acmicpc.net/problem/2003
#include <iostream>
using namespace std;

int A[10001];

int main()
{
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; ++i) cin >> A[i];
    
    int cnt=0, sum=0, left=0, right=0;
    while(1)
    {
        if(sum>=m) sum -= A[left++];
        else if(right==n) break;
        else sum += A[right++];

        if(sum==m) cnt++;
    }

    cout << cnt << '\n';
    return 0;
}