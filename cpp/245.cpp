//설탕 배달 https://www.acmicpc.net/problem/2839
#include <iostream>
using namespace std;
int main()
{
    int n, res;
    cin >> n;
    int tmp = n/5;

    while(1)
    {
        if(tmp<0)
        {
            res = -1;
            break;
        }
        if((n-(5*tmp))%3==0)
        {
            res = tmp+((n-(5*tmp))/3);
            break;
        }
        --tmp;
    }

    cout << res << '\n';
    
    return 0;
}