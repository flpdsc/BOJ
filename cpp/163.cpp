//골드바흐의 추측 https://www.acmicpc.net/problem/9020
#include <iostream>
using namespace std;

bool isPrime[10001];

int main()
{
    for(int i=2; i<=10000; ++i)
        isPrime[i] = true;


    for(int i=2; i*i<=10000; ++i)
        if(isPrime[i])
            for(int j=i*2; j<=10000; j+=i)
                isPrime[j] = false;

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i=n/2; i>=2; --i)
        {
            int a = i;
            int b = n-a;
            if(isPrime[a] && isPrime[b])
            {
                cout << a << ' ' << b << '\n';
                break;
            }
        }
    }
    return 0;
}