//카잉 달력 https://www.acmicpc.net/problem/6064
#include <iostream>
using namespace std;


int main()
{
    int T, M, N, x, y;
    cin >> T;
    while(T--)
    {
        int res=-1;
        cin >> M >> N >> x >> y;

        if(N==y) y=0;
        for(int i=0; M*i+x<=N*M; ++i)
        {
            if((M*i+x)%N==y)
            {
                res = M*i+x;
                break;
            }
        }
        
        cout << res << '\n';
    }

    return 0;
}