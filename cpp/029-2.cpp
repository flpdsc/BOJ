//소수 구하기 https://www.acmicpc.net/problem/1929
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int m, n;
    cin >> m >> n;
    vector<int> prime(n+1);
    prime[0] = 1;
    prime[1] = 1;
    for(int i=2; i<=n; ++i){
        if(prime[i]==0){
            for(int j=i*2; j<=n; j+=i) prime[j] = 1;
        }
    }
    for(int i=m; i<=n; ++i){
        if(prime[i]==0) cout << i << '\n';
    }
    return 0;
}