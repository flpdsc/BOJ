//수들의 합 2 https://www.acmicpc.net/problem/2003
#include <iostream>
using namespace std;

int A[10001];

int main()
{
    int n, m, cnt=0;
    cin >> n >> m;
    for(int i=1; i<=n; ++i)
    {
        cin >> A[i];
        A[i] += A[i-1];

        if(A[i]==m) cnt++;
        else if(A[i]>m)
        {
            for(int j=1; j<i; ++j)
            {
                if(A[i]-A[j]==m)
                {
                    cnt++;
                    break;
                }
            }           
        }
    }

    cout << cnt << '\n';
    return 0;
}