//에라토스테네스의 체 https://www.acmicpc.net/problem/2960
#include <iostream>
using namespace std;

bool nums[1001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K;
    cin >> N >> K;
    
    int idx=2, cnt=1, res=0;
    
    while(1)
    {
        for(int i=idx; i<=N; i+=idx)
        {
            if(!nums[i])
            {
                if(cnt==K)
                {
                    res = i;
                    break;
                }
                nums[i] = true;
                cnt++;
            }
        }
        if(res) break;

        for(int i=idx; i<=N; ++i)
        {
            if(!nums[i])
            {
                idx = i;
                break;
            }
        }
    }

    cout << res << '\n';
    return 0;
}