//차이를 최대로 https://www.acmicpc.net/problem/10819
#include <iostream>
using namespace std;

int n, res=0;
int A[8], B[8];
bool ch[8];

void Sol(int idx)
{
    if(idx==n)
    {
        int sum=0;
        for(int i=1; i<n; ++i)
        {
            sum += abs(B[i]-B[i-1]);
        }
        res = max(res, sum);
        return;
    }
    for(int i=0; i<n; ++i)
    {
        if(!ch[i])
        {
            ch[i] = true;
            B[idx] = A[i];
            Sol(idx+1);
            ch[i] = false;
        }
    }
}

int main()
{
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        cin >> A[i];
    }
    Sol(0);
    cout << res << '\n';
    return 0;
}
